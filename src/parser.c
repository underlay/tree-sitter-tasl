#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 1
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 9

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  sym_comment = 3,
  anon_sym_namespace = 4,
  sym_namespaceURI = 5,
  anon_sym_type = 6,
  anon_sym_class = 7,
  anon_sym_COLON_COLON = 8,
  anon_sym_edge = 9,
  anon_sym_EQ_GT = 10,
  anon_sym_EQ_SLASH = 11,
  anon_sym_SLASH_EQ_GT = 12,
  anon_sym_LT_GT = 13,
  anon_sym_QMARK = 14,
  anon_sym_STAR = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_DASH_GT = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LT_DASH = 21,
  sym_term = 22,
  sym__ = 23,
  sym_source_file = 24,
  sym__block = 25,
  sym__statement = 26,
  sym_namespace_definition = 27,
  sym_type_definition = 28,
  sym_class_declaration = 29,
  sym_edge_declaration = 30,
  sym__type = 31,
  sym_optional = 32,
  sym_reference = 33,
  sym_product = 34,
  sym_component = 35,
  sym_coproduct = 36,
  sym_option = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_product_repeat1 = 39,
  aux_sym_coproduct_repeat1 = 40,
  alias_sym_literal = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_namespace] = "namespace",
  [sym_namespaceURI] = "namespaceURI",
  [anon_sym_type] = "type",
  [anon_sym_class] = "class",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_edge] = "edge",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_EQ_SLASH] = "=/",
  [anon_sym_SLASH_EQ_GT] = "/=>",
  [anon_sym_LT_GT] = "uri",
  [anon_sym_QMARK] = "\?",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT_DASH] = "<-",
  [sym_term] = "term",
  [sym__] = "_",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym__statement] = "_statement",
  [sym_namespace_definition] = "namespace_definition",
  [sym_type_definition] = "type_definition",
  [sym_class_declaration] = "class_declaration",
  [sym_edge_declaration] = "edge_declaration",
  [sym__type] = "_type",
  [sym_optional] = "optional",
  [sym_reference] = "reference",
  [sym_product] = "product",
  [sym_component] = "component",
  [sym_coproduct] = "coproduct",
  [sym_option] = "option",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_product_repeat1] = "product_repeat1",
  [aux_sym_coproduct_repeat1] = "coproduct_repeat1",
  [alias_sym_literal] = "literal",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_namespace] = anon_sym_namespace,
  [sym_namespaceURI] = sym_namespaceURI,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_edge] = anon_sym_edge,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_EQ_SLASH] = anon_sym_EQ_SLASH,
  [anon_sym_SLASH_EQ_GT] = anon_sym_SLASH_EQ_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [sym_term] = sym_term,
  [sym__] = sym__,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym__statement] = sym__statement,
  [sym_namespace_definition] = sym_namespace_definition,
  [sym_type_definition] = sym_type_definition,
  [sym_class_declaration] = sym_class_declaration,
  [sym_edge_declaration] = sym_edge_declaration,
  [sym__type] = sym__type,
  [sym_optional] = sym_optional,
  [sym_reference] = sym_reference,
  [sym_product] = sym_product,
  [sym_component] = sym_component,
  [sym_coproduct] = sym_coproduct,
  [sym_option] = sym_option,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_product_repeat1] = aux_sym_product_repeat1,
  [aux_sym_coproduct_repeat1] = aux_sym_coproduct_repeat1,
  [alias_sym_literal] = alias_sym_literal,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
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
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [sym_term] = {
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
  [alias_sym_literal] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_key = 1,
  field_name = 2,
  field_source = 3,
  field_target = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_source] = "source",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 4},
  [8] = {.index = 12, .length = 8},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
    {field_value, 4},
  [2] =
    {field_value, 1},
  [3] =
    {field_key, 1},
  [4] =
    {field_key, 2},
    {field_value, 6},
  [6] =
    {field_key, 0},
    {field_value, 4},
  [8] =
    {field_key, 2},
    {field_source, 6},
    {field_target, 10},
    {field_value, 8},
  [12] =
    {field_key, 2},
    {field_source, 6},
    {field_target, 14},
    {field_value, 8},
    {field_value, 9},
    {field_value, 10},
    {field_value, 11},
    {field_value, 12},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_literal,
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
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(7);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(22);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(7);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_namespaceURI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_namespaceURI);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(7);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_namespaceURI);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(42);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_namespaceURI);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(22);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(7);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ_SLASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == '?') ADVANCE(24);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(7);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'y') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_edge);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
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
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [sym_namespaceURI] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_edge] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_EQ_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [sym_term] = ACTIONS(1),
    [sym__] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym__block] = STATE(42),
    [sym__statement] = STATE(42),
    [sym_namespace_definition] = STATE(42),
    [sym_type_definition] = STATE(42),
    [sym_class_declaration] = STATE(42),
    [sym_edge_declaration] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
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
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(24), 6,
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
      sym_comment,
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
    STATE(60), 6,
      sym__block,
      sym__statement,
      sym_namespace_definition,
      sym_type_definition,
      sym_class_declaration,
      sym_edge_declaration,
  [72] = 9,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LT_GT,
    ACTIONS(49), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      sym_term,
    STATE(76), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [104] = 9,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LT_GT,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      sym_term,
    STATE(41), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [136] = 9,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      sym_term,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_LT_GT,
    STATE(31), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [168] = 9,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(49), 1,
      anon_sym_QMARK,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      sym_term,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_LT_GT,
    STATE(72), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [200] = 9,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      sym_term,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_LT_GT,
    STATE(46), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [232] = 9,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      sym_term,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LT_GT,
    STATE(64), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [264] = 9,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(63), 1,
      anon_sym_QMARK,
    ACTIONS(65), 1,
      anon_sym_STAR,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      sym_term,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_LT_GT,
    STATE(34), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [296] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_namespace,
      anon_sym_type,
      anon_sym_class,
      anon_sym_edge,
  [309] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      sym_term,
    STATE(19), 1,
      aux_sym_coproduct_repeat1,
    STATE(47), 1,
      sym_option,
  [331] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 1,
      sym_term,
    STATE(21), 1,
      aux_sym_product_repeat1,
    STATE(50), 1,
      sym_component,
  [353] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_term,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_coproduct_repeat1,
    STATE(47), 1,
      sym_option,
  [375] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_term,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym_coproduct_repeat1,
    STATE(47), 1,
      sym_option,
  [397] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_term,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_product_repeat1,
    STATE(50), 1,
      sym_component,
  [419] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_term,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_product_repeat1,
    STATE(50), 1,
      sym_component,
  [441] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      sym_term,
    STATE(18), 1,
      aux_sym_product_repeat1,
    STATE(50), 1,
      sym_component,
  [463] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_term,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_coproduct_repeat1,
    STATE(47), 1,
      sym_option,
  [485] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    ACTIONS(146), 1,
      sym_term,
    STATE(20), 1,
      aux_sym_coproduct_repeat1,
    STATE(47), 1,
      sym_option,
  [507] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_term,
    ACTIONS(121), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      aux_sym_product_repeat1,
    STATE(50), 1,
      sym_component,
  [529] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(131), 4,
      anon_sym_LF,
      sym_comment,
      anon_sym_RBRACE,
      sym_term,
  [539] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(144), 4,
      anon_sym_LF,
      sym_comment,
      anon_sym_RBRACK,
      sym_term,
  [549] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      anon_sym_LF,
  [559] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [567] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
  [577] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(161), 1,
      anon_sym_EQ_GT,
    ACTIONS(163), 1,
      anon_sym_EQ_SLASH,
  [587] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
  [597] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
  [607] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [615] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [623] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [631] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [639] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [647] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [655] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [663] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [671] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [679] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [687] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(193), 1,
      anon_sym_LF,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
  [697] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [705] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      anon_sym_LF,
  [715] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [723] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [731] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(203), 1,
      anon_sym_COLON_COLON,
  [738] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(205), 1,
      anon_sym_LF,
  [745] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(207), 1,
      anon_sym_LF,
  [752] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [759] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(211), 1,
      sym_identifier,
  [766] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(213), 1,
      anon_sym_LF,
  [773] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(215), 1,
      sym_identifier,
  [780] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(217), 1,
      sym_term,
  [787] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(219), 1,
      anon_sym_DASH_GT,
  [794] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(221), 1,
      sym_term,
  [801] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(223), 1,
      sym_term,
  [808] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(225), 1,
      sym_term,
  [815] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(227), 1,
      anon_sym_LT_DASH,
  [822] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(229), 1,
      anon_sym_COLON_COLON,
  [829] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(231), 1,
      sym_namespaceURI,
  [836] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(153), 1,
      anon_sym_LF,
  [843] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(233), 1,
      sym_term,
  [850] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(235), 1,
      sym_term,
  [857] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(237), 1,
      anon_sym_SLASH_EQ_GT,
  [864] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(239), 1,
      anon_sym_LF,
  [871] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(241), 1,
      sym_term,
  [878] = 1,
    ACTIONS(183), 1,
      sym__,
  [882] = 1,
    ACTIONS(243), 1,
      sym__,
  [886] = 1,
    ACTIONS(245), 1,
      sym__,
  [890] = 1,
    ACTIONS(247), 1,
      sym__,
  [894] = 1,
    ACTIONS(249), 1,
      sym__,
  [898] = 1,
    ACTIONS(251), 1,
      sym__,
  [902] = 1,
    ACTIONS(253), 1,
      sym__,
  [906] = 1,
    ACTIONS(255), 1,
      sym__,
  [910] = 1,
    ACTIONS(257), 1,
      sym__,
  [914] = 1,
    ACTIONS(259), 1,
      sym__,
  [918] = 1,
    ACTIONS(181), 1,
      sym__,
  [922] = 1,
    ACTIONS(261), 1,
      sym__,
  [926] = 1,
    ACTIONS(263), 1,
      sym__,
  [930] = 1,
    ACTIONS(265), 1,
      sym__,
  [934] = 1,
    ACTIONS(267), 1,
      sym__,
  [938] = 1,
    ACTIONS(187), 1,
      sym__,
  [942] = 1,
    ACTIONS(191), 1,
      sym__,
  [946] = 1,
    ACTIONS(199), 1,
      sym__,
  [950] = 1,
    ACTIONS(201), 1,
      sym__,
  [954] = 1,
    ACTIONS(177), 1,
      sym__,
  [958] = 1,
    ACTIONS(179), 1,
      sym__,
  [962] = 1,
    ACTIONS(269), 1,
      sym__,
  [966] = 1,
    ACTIONS(271), 1,
      sym__,
  [970] = 1,
    ACTIONS(273), 1,
      sym__,
  [974] = 1,
    ACTIONS(275), 1,
      sym__,
  [978] = 1,
    ACTIONS(173), 1,
      sym__,
  [982] = 1,
    ACTIONS(277), 1,
      sym__,
  [986] = 1,
    ACTIONS(279), 1,
      sym__,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 200,
  [SMALL_STATE(9)] = 232,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 296,
  [SMALL_STATE(12)] = 309,
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 353,
  [SMALL_STATE(15)] = 375,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 419,
  [SMALL_STATE(18)] = 441,
  [SMALL_STATE(19)] = 463,
  [SMALL_STATE(20)] = 485,
  [SMALL_STATE(21)] = 507,
  [SMALL_STATE(22)] = 529,
  [SMALL_STATE(23)] = 539,
  [SMALL_STATE(24)] = 549,
  [SMALL_STATE(25)] = 559,
  [SMALL_STATE(26)] = 567,
  [SMALL_STATE(27)] = 577,
  [SMALL_STATE(28)] = 587,
  [SMALL_STATE(29)] = 597,
  [SMALL_STATE(30)] = 607,
  [SMALL_STATE(31)] = 615,
  [SMALL_STATE(32)] = 623,
  [SMALL_STATE(33)] = 631,
  [SMALL_STATE(34)] = 639,
  [SMALL_STATE(35)] = 647,
  [SMALL_STATE(36)] = 655,
  [SMALL_STATE(37)] = 663,
  [SMALL_STATE(38)] = 671,
  [SMALL_STATE(39)] = 679,
  [SMALL_STATE(40)] = 687,
  [SMALL_STATE(41)] = 697,
  [SMALL_STATE(42)] = 705,
  [SMALL_STATE(43)] = 715,
  [SMALL_STATE(44)] = 723,
  [SMALL_STATE(45)] = 731,
  [SMALL_STATE(46)] = 738,
  [SMALL_STATE(47)] = 745,
  [SMALL_STATE(48)] = 752,
  [SMALL_STATE(49)] = 759,
  [SMALL_STATE(50)] = 766,
  [SMALL_STATE(51)] = 773,
  [SMALL_STATE(52)] = 780,
  [SMALL_STATE(53)] = 787,
  [SMALL_STATE(54)] = 794,
  [SMALL_STATE(55)] = 801,
  [SMALL_STATE(56)] = 808,
  [SMALL_STATE(57)] = 815,
  [SMALL_STATE(58)] = 822,
  [SMALL_STATE(59)] = 829,
  [SMALL_STATE(60)] = 836,
  [SMALL_STATE(61)] = 843,
  [SMALL_STATE(62)] = 850,
  [SMALL_STATE(63)] = 857,
  [SMALL_STATE(64)] = 864,
  [SMALL_STATE(65)] = 871,
  [SMALL_STATE(66)] = 878,
  [SMALL_STATE(67)] = 882,
  [SMALL_STATE(68)] = 886,
  [SMALL_STATE(69)] = 890,
  [SMALL_STATE(70)] = 894,
  [SMALL_STATE(71)] = 898,
  [SMALL_STATE(72)] = 902,
  [SMALL_STATE(73)] = 906,
  [SMALL_STATE(74)] = 910,
  [SMALL_STATE(75)] = 914,
  [SMALL_STATE(76)] = 918,
  [SMALL_STATE(77)] = 922,
  [SMALL_STATE(78)] = 926,
  [SMALL_STATE(79)] = 930,
  [SMALL_STATE(80)] = 934,
  [SMALL_STATE(81)] = 938,
  [SMALL_STATE(82)] = 942,
  [SMALL_STATE(83)] = 946,
  [SMALL_STATE(84)] = 950,
  [SMALL_STATE(85)] = 954,
  [SMALL_STATE(86)] = 958,
  [SMALL_STATE(87)] = 962,
  [SMALL_STATE(88)] = 966,
  [SMALL_STATE(89)] = 970,
  [SMALL_STATE(90)] = 974,
  [SMALL_STATE(91)] = 978,
  [SMALL_STATE(92)] = 982,
  [SMALL_STATE(93)] = 986,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(18),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(50),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(70),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(20),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(47),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(90),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 5, .production_id = 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 5, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 2, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_declaration, 11, .production_id = 7),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_declaration, 15, .production_id = 8),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 7, .production_id = 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, .production_id = 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, .production_id = 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
