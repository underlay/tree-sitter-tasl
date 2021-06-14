module.exports = grammar({
	name: "tasl",
	rules: {
		source_file: ($) =>
			seq(repeat(seq(optional($._block), "\n")), optional($._block)),
		_block: ($) => choice($._comment, $._statement),

		_statement: ($) =>
			choice(
				$.namespace_definition,
				$.type_definition,
				$.class_declaration,
				$.edge_declaration
			),

		_comment: ($) => /#[^$\n]*/,

		namespace_definition: ($) =>
			seq("namespace", $._, $.identifier, $._, $.namespaceURI),

		namespaceURI: ($) =>
			/[a-zA-Z][a-zA-Z0-9]*:[a-zA-Z0-9\-\._~:/\[\]@!$&'()*+,;%=]+[/?#]/,

		type_definition: ($) => seq("type", $._, $.identifier, $._, $._type),
		class_declaration: ($) =>
			seq("class", $._, $.key, $._, "::", $._, $._type),
		edge_declaration: ($) =>
			seq(
				"edge",
				$._,
				$.key,
				$._,
				"::",
				$._,
				alias($.key, $.source),
				$._,
				$.value,
				$._,
				alias($.key, $.target)
			),
		value: ($) => choice("=>", seq("=/", $._, $._type, $._, "/=>")),

		_type: ($) =>
			choice(
				$.identifier,
				$.optional,
				$.reference,
				$.uri,
				$.literal,
				$.product,
				$.coproduct
			),

		optional: ($) => seq("?", $._type),
		reference: ($) => seq("*", $.key),
		uri: ($) => "<>",
		literal: ($) => seq("<", alias($.key, $.datatype), ">"),
		product: ($) =>
			seq(
				"{",
				optional(
					seq(
						"\n",
						repeat(
							seq(optional(choice($._comment, $.component)), "\n")
						)
					)
				),
				"}"
			),

		component: ($) => seq($.key, $._, "->", $._, $._type),

		coproduct: ($) =>
			seq(
				"[",
				optional(
					seq(
						"\n",
						repeat(
							seq(optional(choice($._comment, $.option)), "\n")
						)
					)
				),
				"]"
			),

		option: ($) => seq($.key, $._, "<-", $._, $._type),

		identifier: ($) => /[a-zA-Z][a-zA-Z0-9]*/,

		key: ($) =>
			/[a-zA-Z][a-zA-Z0-9]*:(?:[A-Za-z0-9\-._~!$&'()*+,;=:@/?]|%[0-9A-Fa-f]{2})+/,

		_: ($) => /[ \t]/,
	},
	extras: ($) => [$._],
});
