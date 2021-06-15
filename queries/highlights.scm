(comment) @comment

"namespace" @keyword
"type" @keyword
"class" @keyword
"edge" @keyword

(class_declaration "::" @constructor)
(class_declaration key: (term) @function.builtin)

(edge_declaration key: (term) @function.builtin)
(edge_declaration source: (term) @function.builtin)
(edge_declaration target: (term) @function.builtin)
(edge_declaration "::" @constructor)
(edge_declaration "=>" @punctuation.delimiter)
(edge_declaration "=/" @punctuation.delimiter)
(edge_declaration "/=>" @punctuation.delimiter)

(namespace_definition (identifier) @variable.builtin)
(identifier) @type

(product "{" @punctuation.bracket)
(product "}" @punctuation.bracket)

(component (term) @property)
(component "->" @punctuation.delimiter)

(coproduct "[" @punctuation.bracket)
(coproduct "]" @punctuation.bracket)

(option (term) @property)
(option "<-" @punctuation.delimiter)

(uri) @constant.builtin

(literal) @constant

(optional "?" @operator)

(reference "*" @operator)
(reference key: (term) @function.builtin)