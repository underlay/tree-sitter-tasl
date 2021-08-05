(comment) @comment

"namespace" @keyword
"literal" @keyword
"type" @keyword
"class" @keyword

(class_declaration "::" @constructor)
(class_declaration key: (term) @function.builtin)


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

(optional "?" @operator)

(reference "*" @operator)
(reference key: (term) @function.builtin)