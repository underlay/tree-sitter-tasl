#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 15
#define PRODUCTION_ID_COUNT 9

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  sym_comment = 3,
  anon_sym_namespace = 4,
  sym_namespace_uri = 5,
  anon_sym_literal = 6,
  anon_sym_type = 7,
  anon_sym_class = 8,
  anon_sym_COLON_COLON = 9,
  anon_sym_edge = 10,
  anon_sym_EQ_GT = 11,
  anon_sym_EQ_SLASH = 12,
  anon_sym_SLASH_EQ_GT = 13,
  anon_sym_QMARK = 14,
  anon_sym_STAR = 15,
  sym_uri = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_DASH_GT = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_LT_DASH = 22,
  sym_term = 23,
  sym__ = 24,
  sym_source_file = 25,
  sym__block = 26,
  sym__statement = 27,
  sym_namespace_definition = 28,
  sym_literal_definition = 29,
  sym_type_definition = 30,
  sym_class_declaration = 31,
  sym_edge_declaration = 32,
  sym__type = 33,
  sym_optional = 34,
  sym_reference = 35,
  sym_product = 36,
  sym_component = 37,
  sym_coproduct = 38,
  sym_option = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_product_repeat1 = 41,
  aux_sym_coproduct_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_namespace] = "namespace",
  [sym_namespace_uri] = "namespace_uri",
  [anon_sym_literal] = "literal",
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
  [sym_literal_definition] = "literal_definition",
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
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_namespace] = anon_sym_namespace,
  [sym_namespace_uri] = sym_namespace_uri,
  [anon_sym_literal] = anon_sym_literal,
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
  [sym_literal_definition] = sym_literal_definition,
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
  [sym_namespace_uri] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_literal] = {
    .visible = true,
    .named = false,
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
  [sym_literal_definition] = {
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
};

enum {
  field_datatype = 1,
  field_key = 2,
  field_name = 3,
  field_source = 4,
  field_target = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_datatype] = "datatype",
  [field_key] = "key",
  [field_name] = "name",
  [field_source] = "source",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 4},
  [8] = {.index = 14, .length = 8},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
    {field_value, 4},
  [2] =
    {field_datatype, 4},
    {field_name, 2},
  [4] =
    {field_value, 1},
  [5] =
    {field_key, 1},
  [6] =
    {field_key, 2},
    {field_value, 6},
  [8] =
    {field_key, 0},
    {field_value, 4},
  [10] =
    {field_key, 2},
    {field_source, 6},
    {field_target, 10},
    {field_value, 8},
  [14] =
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(7);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(8);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '>') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(24);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(8);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '?') ADVANCE(32);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_namespace_uri);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_namespace_uri);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(7);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(8);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(43);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_namespace_uri);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(44);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_namespace_uri);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(24);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(8);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_uri);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(7);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(8);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(44);
      END_STATE();
    case 45:
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
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_edge);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_literal);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
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
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
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
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [sym_namespace_uri] = ACTIONS(1),
    [anon_sym_literal] = ACTIONS(1),
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
    [sym_literal_definition] = STATE(42),
    [sym_type_definition] = STATE(42),
    [sym_class_declaration] = STATE(42),
    [sym_edge_declaration] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_namespace] = ACTIONS(11),
    [anon_sym_literal] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_edge] = ACTIONS(19),
    [sym__] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(11), 1,
      anon_sym_namespace,
    ACTIONS(13), 1,
      anon_sym_literal,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(19), 1,
      anon_sym_edge,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(25), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 7,
      sym__block,
      sym__statement,
      sym_namespace_definition,
      sym_literal_definition,
      sym_type_definition,
      sym_class_declaration,
      sym_edge_declaration,
  [40] = 11,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_LF,
    ACTIONS(32), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_namespace,
    ACTIONS(38), 1,
      anon_sym_literal,
    ACTIONS(41), 1,
      anon_sym_type,
    ACTIONS(44), 1,
      anon_sym_class,
    ACTIONS(47), 1,
      anon_sym_edge,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(60), 7,
      sym__block,
      sym__statement,
      sym_namespace_definition,
      sym_literal_definition,
      sym_type_definition,
      sym_class_declaration,
      sym_edge_declaration,
  [80] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(52), 1,
      anon_sym_QMARK,
    ACTIONS(54), 1,
      anon_sym_STAR,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 2,
      sym_uri,
      sym_identifier,
    STATE(65), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [107] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(52), 1,
      anon_sym_QMARK,
    ACTIONS(54), 1,
      anon_sym_STAR,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 2,
      sym_uri,
      sym_identifier,
    STATE(28), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [134] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(64), 1,
      anon_sym_QMARK,
    ACTIONS(66), 1,
      anon_sym_STAR,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 2,
      sym_uri,
      sym_identifier,
    STATE(81), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [161] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(64), 1,
      anon_sym_QMARK,
    ACTIONS(66), 1,
      anon_sym_STAR,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 2,
      sym_uri,
      sym_identifier,
    STATE(76), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [188] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(52), 1,
      anon_sym_QMARK,
    ACTIONS(54), 1,
      anon_sym_STAR,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 2,
      sym_uri,
      sym_identifier,
    STATE(64), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [215] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(52), 1,
      anon_sym_QMARK,
    ACTIONS(54), 1,
      anon_sym_STAR,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 2,
      sym_uri,
      sym_identifier,
    STATE(38), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [242] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(52), 1,
      anon_sym_QMARK,
    ACTIONS(54), 1,
      anon_sym_STAR,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 2,
      sym_uri,
      sym_identifier,
    STATE(35), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [269] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(27), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_namespace,
      anon_sym_literal,
      anon_sym_type,
      anon_sym_class,
      anon_sym_edge,
  [283] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(80), 1,
      anon_sym_LF,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(86), 1,
      sym_term,
    STATE(18), 1,
      aux_sym_coproduct_repeat1,
    STATE(50), 1,
      sym_option,
  [305] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      sym_term,
    STATE(19), 1,
      aux_sym_product_repeat1,
    STATE(47), 1,
      sym_component,
  [327] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_term,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_coproduct_repeat1,
    STATE(50), 1,
      sym_option,
  [349] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_term,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_product_repeat1,
    STATE(47), 1,
      sym_component,
  [371] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_term,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_product_repeat1,
    STATE(47), 1,
      sym_component,
  [393] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_term,
    ACTIONS(108), 1,
      anon_sym_LF,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_coproduct_repeat1,
    STATE(50), 1,
      sym_option,
  [415] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(82), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_term,
    ACTIONS(108), 1,
      anon_sym_LF,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_coproduct_repeat1,
    STATE(50), 1,
      sym_option,
  [437] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_term,
    ACTIONS(104), 1,
      anon_sym_LF,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_product_repeat1,
    STATE(47), 1,
      sym_component,
  [459] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(116), 1,
      anon_sym_LF,
    ACTIONS(119), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    ACTIONS(124), 1,
      sym_term,
    STATE(20), 1,
      aux_sym_coproduct_repeat1,
    STATE(50), 1,
      sym_option,
  [481] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(127), 1,
      anon_sym_LF,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      sym_term,
    STATE(21), 1,
      aux_sym_product_repeat1,
    STATE(47), 1,
      sym_component,
  [503] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(133), 4,
      anon_sym_LF,
      sym_comment,
      anon_sym_RBRACE,
      sym_term,
  [513] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(122), 4,
      anon_sym_LF,
      sym_comment,
      anon_sym_RBRACK,
      sym_term,
  [523] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [531] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [539] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
  [549] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [557] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [565] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [573] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [581] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(154), 1,
      anon_sym_EQ_GT,
    ACTIONS(156), 1,
      anon_sym_EQ_SLASH,
  [591] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      anon_sym_LF,
  [601] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
  [611] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
  [621] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [629] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [637] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [645] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [653] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [661] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [669] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [677] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      anon_sym_LF,
  [687] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [695] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
  [705] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(190), 1,
      sym_namespace_uri,
  [712] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(192), 1,
      sym_term,
  [719] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(194), 1,
      anon_sym_LF,
  [726] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [733] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(198), 1,
      sym_identifier,
  [740] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(200), 1,
      anon_sym_LF,
  [747] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(202), 1,
      sym_term,
  [754] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(204), 1,
      sym_identifier,
  [761] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(206), 1,
      sym_identifier,
  [768] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(208), 1,
      sym_term,
  [775] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(210), 1,
      sym_term,
  [782] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(212), 1,
      anon_sym_COLON_COLON,
  [789] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(214), 1,
      anon_sym_DASH_GT,
  [796] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(216), 1,
      anon_sym_COLON_COLON,
  [803] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(218), 1,
      sym_term,
  [810] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(160), 1,
      anon_sym_LF,
  [817] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(220), 1,
      anon_sym_LT_DASH,
  [824] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(222), 1,
      anon_sym_SLASH_EQ_GT,
  [831] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(224), 1,
      sym_term,
  [838] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(226), 1,
      anon_sym_LF,
  [845] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(228), 1,
      anon_sym_LF,
  [852] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(230), 1,
      sym_term,
  [859] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(232), 1,
      sym_term,
  [866] = 1,
    ACTIONS(234), 1,
      sym__,
  [870] = 1,
    ACTIONS(182), 1,
      sym__,
  [874] = 1,
    ACTIONS(236), 1,
      sym__,
  [878] = 1,
    ACTIONS(238), 1,
      sym__,
  [882] = 1,
    ACTIONS(240), 1,
      sym__,
  [886] = 1,
    ACTIONS(242), 1,
      sym__,
  [890] = 1,
    ACTIONS(244), 1,
      sym__,
  [894] = 1,
    ACTIONS(246), 1,
      sym__,
  [898] = 1,
    ACTIONS(248), 1,
      sym__,
  [902] = 1,
    ACTIONS(250), 1,
      sym__,
  [906] = 1,
    ACTIONS(252), 1,
      sym__,
  [910] = 1,
    ACTIONS(254), 1,
      sym__,
  [914] = 1,
    ACTIONS(256), 1,
      sym__,
  [918] = 1,
    ACTIONS(176), 1,
      sym__,
  [922] = 1,
    ACTIONS(178), 1,
      sym__,
  [926] = 1,
    ACTIONS(258), 1,
      sym__,
  [930] = 1,
    ACTIONS(184), 1,
      sym__,
  [934] = 1,
    ACTIONS(180), 1,
      sym__,
  [938] = 1,
    ACTIONS(172), 1,
      sym__,
  [942] = 1,
    ACTIONS(140), 1,
      sym__,
  [946] = 1,
    ACTIONS(146), 1,
      sym__,
  [950] = 1,
    ACTIONS(260), 1,
      sym__,
  [954] = 1,
    ACTIONS(262), 1,
      sym__,
  [958] = 1,
    ACTIONS(264), 1,
      sym__,
  [962] = 1,
    ACTIONS(266), 1,
      sym__,
  [966] = 1,
    ACTIONS(268), 1,
      sym__,
  [970] = 1,
    ACTIONS(270), 1,
      sym__,
  [974] = 1,
    ACTIONS(272), 1,
      sym__,
  [978] = 1,
    ACTIONS(274), 1,
      sym__,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 134,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 188,
  [SMALL_STATE(9)] = 215,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 269,
  [SMALL_STATE(12)] = 283,
  [SMALL_STATE(13)] = 305,
  [SMALL_STATE(14)] = 327,
  [SMALL_STATE(15)] = 349,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 393,
  [SMALL_STATE(18)] = 415,
  [SMALL_STATE(19)] = 437,
  [SMALL_STATE(20)] = 459,
  [SMALL_STATE(21)] = 481,
  [SMALL_STATE(22)] = 503,
  [SMALL_STATE(23)] = 513,
  [SMALL_STATE(24)] = 523,
  [SMALL_STATE(25)] = 531,
  [SMALL_STATE(26)] = 539,
  [SMALL_STATE(27)] = 549,
  [SMALL_STATE(28)] = 557,
  [SMALL_STATE(29)] = 565,
  [SMALL_STATE(30)] = 573,
  [SMALL_STATE(31)] = 581,
  [SMALL_STATE(32)] = 591,
  [SMALL_STATE(33)] = 601,
  [SMALL_STATE(34)] = 611,
  [SMALL_STATE(35)] = 621,
  [SMALL_STATE(36)] = 629,
  [SMALL_STATE(37)] = 637,
  [SMALL_STATE(38)] = 645,
  [SMALL_STATE(39)] = 653,
  [SMALL_STATE(40)] = 661,
  [SMALL_STATE(41)] = 669,
  [SMALL_STATE(42)] = 677,
  [SMALL_STATE(43)] = 687,
  [SMALL_STATE(44)] = 695,
  [SMALL_STATE(45)] = 705,
  [SMALL_STATE(46)] = 712,
  [SMALL_STATE(47)] = 719,
  [SMALL_STATE(48)] = 726,
  [SMALL_STATE(49)] = 733,
  [SMALL_STATE(50)] = 740,
  [SMALL_STATE(51)] = 747,
  [SMALL_STATE(52)] = 754,
  [SMALL_STATE(53)] = 761,
  [SMALL_STATE(54)] = 768,
  [SMALL_STATE(55)] = 775,
  [SMALL_STATE(56)] = 782,
  [SMALL_STATE(57)] = 789,
  [SMALL_STATE(58)] = 796,
  [SMALL_STATE(59)] = 803,
  [SMALL_STATE(60)] = 810,
  [SMALL_STATE(61)] = 817,
  [SMALL_STATE(62)] = 824,
  [SMALL_STATE(63)] = 831,
  [SMALL_STATE(64)] = 838,
  [SMALL_STATE(65)] = 845,
  [SMALL_STATE(66)] = 852,
  [SMALL_STATE(67)] = 859,
  [SMALL_STATE(68)] = 866,
  [SMALL_STATE(69)] = 870,
  [SMALL_STATE(70)] = 874,
  [SMALL_STATE(71)] = 878,
  [SMALL_STATE(72)] = 882,
  [SMALL_STATE(73)] = 886,
  [SMALL_STATE(74)] = 890,
  [SMALL_STATE(75)] = 894,
  [SMALL_STATE(76)] = 898,
  [SMALL_STATE(77)] = 902,
  [SMALL_STATE(78)] = 906,
  [SMALL_STATE(79)] = 910,
  [SMALL_STATE(80)] = 914,
  [SMALL_STATE(81)] = 918,
  [SMALL_STATE(82)] = 922,
  [SMALL_STATE(83)] = 926,
  [SMALL_STATE(84)] = 930,
  [SMALL_STATE(85)] = 934,
  [SMALL_STATE(86)] = 938,
  [SMALL_STATE(87)] = 942,
  [SMALL_STATE(88)] = 946,
  [SMALL_STATE(89)] = 950,
  [SMALL_STATE(90)] = 954,
  [SMALL_STATE(91)] = 958,
  [SMALL_STATE(92)] = 962,
  [SMALL_STATE(93)] = 966,
  [SMALL_STATE(94)] = 970,
  [SMALL_STATE(95)] = 974,
  [SMALL_STATE(96)] = 978,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(20),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(50),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(90),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(21),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(47),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(71),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_declaration, 15, .production_id = 8),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 7, .production_id = 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 5, .production_id = 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_definition, 5, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 5, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_declaration, 11, .production_id = 7),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 2, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2, .production_id = 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, .production_id = 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, .production_id = 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
