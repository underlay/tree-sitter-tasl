#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 3
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  sym__comment = 2,
  anon_sym_namespace = 3,
  sym_namespaceURI = 4,
  anon_sym_type = 5,
  anon_sym_class = 6,
  anon_sym_COLON_COLON = 7,
  anon_sym_edge = 8,
  anon_sym_EQ_GT = 9,
  anon_sym_EQ_SLASH = 10,
  anon_sym_SLASH_EQ_GT = 11,
  anon_sym_QMARK = 12,
  anon_sym_STAR = 13,
  sym_uri = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_DASH_GT = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_LT_DASH = 22,
  sym_identifier = 23,
  sym_key = 24,
  sym__ = 25,
  sym_source_file = 26,
  sym__block = 27,
  sym__statement = 28,
  sym_namespace_definition = 29,
  sym_type_definition = 30,
  sym_class_declaration = 31,
  sym_edge_declaration = 32,
  sym_value = 33,
  sym__type = 34,
  sym_optional = 35,
  sym_reference = 36,
  sym_literal = 37,
  sym_product = 38,
  sym_component = 39,
  sym_coproduct = 40,
  sym_option = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_product_repeat1 = 43,
  aux_sym_coproduct_repeat1 = 44,
  alias_sym_datatype = 45,
  alias_sym_source = 46,
  alias_sym_target = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym__comment] = "_comment",
  [anon_sym_namespace] = "namespace",
  [sym_namespaceURI] = "namespaceURI",
  [anon_sym_type] = "type",
  [anon_sym_class] = "class",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_edge] = "edge",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_EQ_SLASH] = "=/",
  [anon_sym_SLASH_EQ_GT] = "/=>",
  [anon_sym_QMARK] = "\?",
  [anon_sym_STAR] = "*",
  [sym_uri] = "uri",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT_DASH] = "<-",
  [sym_identifier] = "identifier",
  [sym_key] = "key",
  [sym__] = "_",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym__statement] = "_statement",
  [sym_namespace_definition] = "namespace_definition",
  [sym_type_definition] = "type_definition",
  [sym_class_declaration] = "class_declaration",
  [sym_edge_declaration] = "edge_declaration",
  [sym_value] = "value",
  [sym__type] = "_type",
  [sym_optional] = "optional",
  [sym_reference] = "reference",
  [sym_literal] = "literal",
  [sym_product] = "product",
  [sym_component] = "component",
  [sym_coproduct] = "coproduct",
  [sym_option] = "option",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_product_repeat1] = "product_repeat1",
  [aux_sym_coproduct_repeat1] = "coproduct_repeat1",
  [alias_sym_datatype] = "datatype",
  [alias_sym_source] = "source",
  [alias_sym_target] = "target",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym__comment] = sym__comment,
  [anon_sym_namespace] = anon_sym_namespace,
  [sym_namespaceURI] = sym_namespaceURI,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_edge] = anon_sym_edge,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_EQ_SLASH] = anon_sym_EQ_SLASH,
  [anon_sym_SLASH_EQ_GT] = anon_sym_SLASH_EQ_GT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_uri] = sym_uri,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [sym_identifier] = sym_identifier,
  [sym_key] = sym_key,
  [sym__] = sym__,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym__statement] = sym__statement,
  [sym_namespace_definition] = sym_namespace_definition,
  [sym_type_definition] = sym_type_definition,
  [sym_class_declaration] = sym_class_declaration,
  [sym_edge_declaration] = sym_edge_declaration,
  [sym_value] = sym_value,
  [sym__type] = sym__type,
  [sym_optional] = sym_optional,
  [sym_reference] = sym_reference,
  [sym_literal] = sym_literal,
  [sym_product] = sym_product,
  [sym_component] = sym_component,
  [sym_coproduct] = sym_coproduct,
  [sym_option] = sym_option,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_product_repeat1] = aux_sym_product_repeat1,
  [aux_sym_coproduct_repeat1] = aux_sym_coproduct_repeat1,
  [alias_sym_datatype] = alias_sym_datatype,
  [alias_sym_source] = alias_sym_source,
  [alias_sym_target] = alias_sym_target,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [sym_namespaceURI] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym__] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_namespace_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_edge_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_product] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_coproduct] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_product_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_coproduct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_datatype] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_source] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_target] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_datatype,
  },
  [2] = {
    [6] = alias_sym_source,
    [10] = alias_sym_target,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(9);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(91);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(44);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(9);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(16);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (lookahead == ':') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_namespaceURI);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_namespaceURI);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(9);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(90);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_namespaceURI);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(91);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_namespaceURI);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(44);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(9);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == ':') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == ':') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_edge);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_edge);
      if (lookahead == ':') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_uri);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'g') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'l') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 's') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == 'y') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(9);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 38},
  [60] = {.lex_state = 34},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym__comment] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [sym_namespaceURI] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_edge] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_EQ_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_EQ_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_uri] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym__] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym__block] = STATE(28),
    [sym__statement] = STATE(28),
    [sym_namespace_definition] = STATE(28),
    [sym_type_definition] = STATE(28),
    [sym_class_declaration] = STATE(28),
    [sym_edge_declaration] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym__comment] = ACTIONS(9),
    [anon_sym_namespace] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_class] = ACTIONS(15),
    [anon_sym_edge] = ACTIONS(17),
    [sym__] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_class,
    ACTIONS(17), 1,
      anon_sym_edge,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      sym__comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 6,
      sym__block,
      sym__statement,
      sym_namespace_definition,
      sym_type_definition,
      sym_class_declaration,
      sym_edge_declaration,
  [36] = 10,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(30), 1,
      sym__comment,
    ACTIONS(33), 1,
      anon_sym_namespace,
    ACTIONS(36), 1,
      anon_sym_type,
    ACTIONS(39), 1,
      anon_sym_class,
    ACTIONS(42), 1,
      anon_sym_edge,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(61), 6,
      sym__block,
      sym__statement,
      sym_namespace_definition,
      sym_type_definition,
      sym_class_declaration,
      sym_edge_declaration,
  [72] = 8,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(45), 1,
      anon_sym_QMARK,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 2,
      sym_uri,
      sym_identifier,
    STATE(74), 6,
      sym__type,
      sym_optional,
      sym_reference,
      sym_literal,
      sym_product,
      sym_coproduct,
  [103] = 8,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 2,
      sym_uri,
      sym_identifier,
    STATE(32), 6,
      sym__type,
      sym_optional,
      sym_reference,
      sym_literal,
      sym_product,
      sym_coproduct,
  [134] = 8,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 2,
      sym_uri,
      sym_identifier,
    STATE(34), 6,
      sym__type,
      sym_optional,
      sym_reference,
      sym_literal,
      sym_product,
      sym_coproduct,
  [165] = 8,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 2,
      sym_uri,
      sym_identifier,
    STATE(31), 6,
      sym__type,
      sym_optional,
      sym_reference,
      sym_literal,
      sym_product,
      sym_coproduct,
  [196] = 8,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 2,
      sym_uri,
      sym_identifier,
    STATE(45), 6,
      sym__type,
      sym_optional,
      sym_reference,
      sym_literal,
      sym_product,
      sym_coproduct,
  [227] = 8,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(45), 1,
      anon_sym_QMARK,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 2,
      sym_uri,
      sym_identifier,
    STATE(78), 6,
      sym__type,
      sym_optional,
      sym_reference,
      sym_literal,
      sym_product,
      sym_coproduct,
  [258] = 8,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 2,
      sym_uri,
      sym_identifier,
    STATE(65), 6,
      sym__type,
      sym_optional,
      sym_reference,
      sym_literal,
      sym_product,
      sym_coproduct,
  [289] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym__comment,
      anon_sym_namespace,
      anon_sym_type,
      anon_sym_class,
      anon_sym_edge,
  [302] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      sym__comment,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 1,
      sym_key,
    STATE(18), 1,
      aux_sym_coproduct_repeat1,
    STATE(48), 1,
      sym_option,
  [324] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(81), 1,
      sym__comment,
    ACTIONS(85), 1,
      sym_key,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_coproduct_repeat1,
    STATE(48), 1,
      sym_option,
  [346] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 1,
      sym__comment,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym_key,
    STATE(21), 1,
      aux_sym_product_repeat1,
    STATE(46), 1,
      sym_component,
  [368] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(81), 1,
      sym__comment,
    ACTIONS(85), 1,
      sym_key,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_coproduct_repeat1,
    STATE(48), 1,
      sym_option,
  [390] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(93), 1,
      sym__comment,
    ACTIONS(97), 1,
      sym_key,
    ACTIONS(103), 1,
      anon_sym_LF,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_product_repeat1,
    STATE(46), 1,
      sym_component,
  [412] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(91), 1,
      anon_sym_LF,
    ACTIONS(93), 1,
      sym__comment,
    ACTIONS(97), 1,
      sym_key,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_product_repeat1,
    STATE(46), 1,
      sym_component,
  [434] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(112), 1,
      sym__comment,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    ACTIONS(117), 1,
      sym_key,
    STATE(18), 1,
      aux_sym_coproduct_repeat1,
    STATE(48), 1,
      sym_option,
  [456] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      sym__comment,
    ACTIONS(85), 1,
      sym_key,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_coproduct_repeat1,
    STATE(48), 1,
      sym_option,
  [478] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(93), 1,
      sym__comment,
    ACTIONS(97), 1,
      sym_key,
    ACTIONS(122), 1,
      anon_sym_LF,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_product_repeat1,
    STATE(46), 1,
      sym_component,
  [500] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(129), 1,
      sym__comment,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      sym_key,
    STATE(21), 1,
      aux_sym_product_repeat1,
    STATE(46), 1,
      sym_component,
  [522] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(132), 4,
      anon_sym_LF,
      sym__comment,
      anon_sym_RBRACE,
      sym_key,
  [532] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(115), 4,
      anon_sym_LF,
      sym__comment,
      anon_sym_RBRACK,
      sym_key,
  [542] = 4,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(137), 1,
      anon_sym_EQ_GT,
    ACTIONS(139), 1,
      anon_sym_EQ_SLASH,
    STATE(71), 1,
      sym_value,
  [555] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [563] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [571] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
  [581] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      anon_sym_LF,
  [591] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
  [601] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(155), 1,
      anon_sym_LF,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
  [611] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [619] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [627] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [635] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [643] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [651] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [659] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(149), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
  [669] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [677] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [685] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [693] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
  [703] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [711] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [719] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(187), 1,
      anon_sym_COLON_COLON,
  [726] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(189), 1,
      anon_sym_LF,
  [733] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(191), 1,
      anon_sym_LF,
  [740] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(193), 1,
      sym_key,
  [747] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(195), 1,
      anon_sym_LF,
  [754] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [761] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(199), 1,
      anon_sym_GT,
  [768] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(201), 1,
      anon_sym_GT,
  [775] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(203), 1,
      sym_identifier,
  [782] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(205), 1,
      sym_identifier,
  [789] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(207), 1,
      sym_key,
  [796] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(209), 1,
      anon_sym_DASH_GT,
  [803] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(211), 1,
      sym_key,
  [810] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(213), 1,
      sym_key,
  [817] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(215), 1,
      anon_sym_COLON_COLON,
  [824] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(217), 1,
      anon_sym_LT_DASH,
  [831] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(219), 1,
      sym_namespaceURI,
  [838] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(149), 1,
      anon_sym_LF,
  [845] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(221), 1,
      sym_key,
  [852] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(223), 1,
      anon_sym_SLASH_EQ_GT,
  [859] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(225), 1,
      sym_key,
  [866] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(227), 1,
      anon_sym_LF,
  [873] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(229), 1,
      sym_key,
  [880] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(231), 1,
      sym_key,
  [887] = 1,
    ACTIONS(185), 1,
      sym__,
  [891] = 1,
    ACTIONS(177), 1,
      sym__,
  [895] = 1,
    ACTIONS(233), 1,
      sym__,
  [899] = 1,
    ACTIONS(235), 1,
      sym__,
  [903] = 1,
    ACTIONS(237), 1,
      sym__,
  [907] = 1,
    ACTIONS(239), 1,
      sym__,
  [911] = 1,
    ACTIONS(241), 1,
      sym__,
  [915] = 1,
    ACTIONS(243), 1,
      sym__,
  [919] = 1,
    ACTIONS(245), 1,
      sym__,
  [923] = 1,
    ACTIONS(247), 1,
      sym__,
  [927] = 1,
    ACTIONS(165), 1,
      sym__,
  [931] = 1,
    ACTIONS(167), 1,
      sym__,
  [935] = 1,
    ACTIONS(173), 1,
      sym__,
  [939] = 1,
    ACTIONS(183), 1,
      sym__,
  [943] = 1,
    ACTIONS(249), 1,
      sym__,
  [947] = 1,
    ACTIONS(251), 1,
      sym__,
  [951] = 1,
    ACTIONS(169), 1,
      sym__,
  [955] = 1,
    ACTIONS(141), 1,
      sym__,
  [959] = 1,
    ACTIONS(163), 1,
      sym__,
  [963] = 1,
    ACTIONS(253), 1,
      sym__,
  [967] = 1,
    ACTIONS(255), 1,
      sym__,
  [971] = 1,
    ACTIONS(257), 1,
      sym__,
  [975] = 1,
    ACTIONS(259), 1,
      sym__,
  [979] = 1,
    ACTIONS(261), 1,
      sym__,
  [983] = 1,
    ACTIONS(263), 1,
      sym__,
  [987] = 1,
    ACTIONS(265), 1,
      sym__,
  [991] = 1,
    ACTIONS(267), 1,
      sym__,
  [995] = 1,
    ACTIONS(269), 1,
      sym__,
  [999] = 1,
    ACTIONS(271), 1,
      sym__,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 134,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 227,
  [SMALL_STATE(10)] = 258,
  [SMALL_STATE(11)] = 289,
  [SMALL_STATE(12)] = 302,
  [SMALL_STATE(13)] = 324,
  [SMALL_STATE(14)] = 346,
  [SMALL_STATE(15)] = 368,
  [SMALL_STATE(16)] = 390,
  [SMALL_STATE(17)] = 412,
  [SMALL_STATE(18)] = 434,
  [SMALL_STATE(19)] = 456,
  [SMALL_STATE(20)] = 478,
  [SMALL_STATE(21)] = 500,
  [SMALL_STATE(22)] = 522,
  [SMALL_STATE(23)] = 532,
  [SMALL_STATE(24)] = 542,
  [SMALL_STATE(25)] = 555,
  [SMALL_STATE(26)] = 563,
  [SMALL_STATE(27)] = 571,
  [SMALL_STATE(28)] = 581,
  [SMALL_STATE(29)] = 591,
  [SMALL_STATE(30)] = 601,
  [SMALL_STATE(31)] = 611,
  [SMALL_STATE(32)] = 619,
  [SMALL_STATE(33)] = 627,
  [SMALL_STATE(34)] = 635,
  [SMALL_STATE(35)] = 643,
  [SMALL_STATE(36)] = 651,
  [SMALL_STATE(37)] = 659,
  [SMALL_STATE(38)] = 669,
  [SMALL_STATE(39)] = 677,
  [SMALL_STATE(40)] = 685,
  [SMALL_STATE(41)] = 693,
  [SMALL_STATE(42)] = 703,
  [SMALL_STATE(43)] = 711,
  [SMALL_STATE(44)] = 719,
  [SMALL_STATE(45)] = 726,
  [SMALL_STATE(46)] = 733,
  [SMALL_STATE(47)] = 740,
  [SMALL_STATE(48)] = 747,
  [SMALL_STATE(49)] = 754,
  [SMALL_STATE(50)] = 761,
  [SMALL_STATE(51)] = 768,
  [SMALL_STATE(52)] = 775,
  [SMALL_STATE(53)] = 782,
  [SMALL_STATE(54)] = 789,
  [SMALL_STATE(55)] = 796,
  [SMALL_STATE(56)] = 803,
  [SMALL_STATE(57)] = 810,
  [SMALL_STATE(58)] = 817,
  [SMALL_STATE(59)] = 824,
  [SMALL_STATE(60)] = 831,
  [SMALL_STATE(61)] = 838,
  [SMALL_STATE(62)] = 845,
  [SMALL_STATE(63)] = 852,
  [SMALL_STATE(64)] = 859,
  [SMALL_STATE(65)] = 866,
  [SMALL_STATE(66)] = 873,
  [SMALL_STATE(67)] = 880,
  [SMALL_STATE(68)] = 887,
  [SMALL_STATE(69)] = 891,
  [SMALL_STATE(70)] = 895,
  [SMALL_STATE(71)] = 899,
  [SMALL_STATE(72)] = 903,
  [SMALL_STATE(73)] = 907,
  [SMALL_STATE(74)] = 911,
  [SMALL_STATE(75)] = 915,
  [SMALL_STATE(76)] = 919,
  [SMALL_STATE(77)] = 923,
  [SMALL_STATE(78)] = 927,
  [SMALL_STATE(79)] = 931,
  [SMALL_STATE(80)] = 935,
  [SMALL_STATE(81)] = 939,
  [SMALL_STATE(82)] = 943,
  [SMALL_STATE(83)] = 947,
  [SMALL_STATE(84)] = 951,
  [SMALL_STATE(85)] = 955,
  [SMALL_STATE(86)] = 959,
  [SMALL_STATE(87)] = 963,
  [SMALL_STATE(88)] = 967,
  [SMALL_STATE(89)] = 971,
  [SMALL_STATE(90)] = 975,
  [SMALL_STATE(91)] = 979,
  [SMALL_STATE(92)] = 983,
  [SMALL_STATE(93)] = 987,
  [SMALL_STATE(94)] = 991,
  [SMALL_STATE(95)] = 995,
  [SMALL_STATE(96)] = 999,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(18),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(48),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(91),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(21),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(96),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 7),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_declaration, 11, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [197] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 5),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tasl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
