module.exports = grammar({
	name: "tasl",
	word: ($) => $.identifier,
	rules: {
		source_file: ($) =>
			seq(repeat(seq(optional($._block), "\n")), optional($._block)),
		_block: ($) => choice($.comment, $._statement),

		_statement: ($) =>
			choice(
				$.namespace_definition,
				$.literal_definition,
				$.type_definition,
				$.class_declaration,
				$.edge_declaration
			),

		comment: ($) => /#[^$\n]*/,

		namespace_definition: ($) =>
			seq(
				"namespace",
				$._,
				field("name", $.identifier),
				$._,
				field("value", $.namespace_uri)
			),

		namespace_uri: ($) =>
			/[a-zA-Z][a-zA-Z0-9]*:[a-zA-Z0-9\-\._~:/\[\]@!$&'()*+,;%=]+[/?#]/,

		literal_definition: ($) =>
			seq(
				"literal",
				$._,
				field("name", $.identifier),
				$._,
				field("datatype", $.term)
			),

		type_definition: ($) =>
			seq(
				"type",
				$._,
				field("name", $.identifier),
				$._,
				field("value", $._type)
			),

		class_declaration: ($) =>
			seq(
				"class",
				$._,
				field("key", $.term),
				$._,
				"::",
				$._,
				field("value", $._type)
			),

		edge_declaration: ($) =>
			seq(
				"edge",
				$._,
				field("key", $.term),
				$._,
				"::",
				$._,
				field("source", $.term),
				$._,
				field("value", choice("=>", seq("=/", $._, $._type, $._, "/=>"))),
				$._,
				field("target", $.term)
			),

		_type: ($) =>
			choice(
				$.identifier,
				$.optional,
				$.reference,
				$.uri,
				$.product,
				$.coproduct
			),

		optional: ($) => seq("?", field("value", $._type)),

		reference: ($) => seq("*", field("key", $.term)),

		uri: ($) => "<>",

		product: ($) =>
			seq(
				"{",
				optional(
					seq("\n", repeat(seq(optional(choice($.comment, $.component)), "\n")))
				),
				"}"
			),

		component: ($) =>
			seq(field("key", $.term), $._, "->", $._, field("value", $._type)),

		coproduct: ($) =>
			seq(
				"[",
				optional(
					seq("\n", repeat(seq(optional(choice($.comment, $.option)), "\n")))
				),
				"]"
			),

		option: ($) =>
			seq(field("key", $.term), $._, "<-", $._, field("value", $._type)),

		identifier: ($) => /[a-zA-Z][a-zA-Z0-9]*/,

		term: ($) =>
			/[a-zA-Z][a-zA-Z0-9]*:(?:[A-Za-z0-9\-._~!$&'()*+,;=:@/?]|%[0-9A-Fa-f]{2})+/,

		_: ($) => /[ \t]/,
	},
	extras: ($) => [$._],
})
