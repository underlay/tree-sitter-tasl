#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_QMARK = 10,
  anon_sym_STAR = 11,
  sym_uri = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LT_DASH = 18,
  sym_term = 19,
  sym__ = 20,
  sym_source_file = 21,
  sym__block = 22,
  sym__statement = 23,
  sym_namespace_definition = 24,
  sym_literal_definition = 25,
  sym_type_definition = 26,
  sym_class_declaration = 27,
  sym__type = 28,
  sym_optional = 29,
  sym_reference = 30,
  sym_product = 31,
  sym_component = 32,
  sym_coproduct = 33,
  sym_option = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_product_repeat1 = 36,
  aux_sym_coproduct_repeat1 = 37,
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
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_datatype] = "datatype",
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
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
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == ']') ADVANCE(33);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '?') ADVANCE(38);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(7);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
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
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(21);
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
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(21);
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
      if (lookahead == ':') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(7);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_namespace_uri);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_namespace_uri);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(7);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(37);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_namespace_uri);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(38);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_namespace_uri);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(21);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(7);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_uri);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(7);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_term);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(38);
      END_STATE();
    case 39:
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
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(6);
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
      if (lookahead == 't') ADVANCE(10);
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
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_literal);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
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
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
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
    [sym_source_file] = STATE(46),
    [sym__block] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_namespace_definition] = STATE(21),
    [sym_literal_definition] = STATE(21),
    [sym_type_definition] = STATE(21),
    [sym_class_declaration] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_namespace] = ACTIONS(11),
    [anon_sym_literal] = ACTIONS(13),
    [anon_sym_type] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
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
      anon_sym_literal,
    ACTIONS(15), 1,
      anon_sym_type,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(26), 6,
      sym__block,
      sym__statement,
      sym_namespace_definition,
      sym_literal_definition,
      sym_type_definition,
      sym_class_declaration,
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
      anon_sym_literal,
    ACTIONS(39), 1,
      anon_sym_type,
    ACTIONS(42), 1,
      anon_sym_class,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(48), 6,
      sym__block,
      sym__statement,
      sym_namespace_definition,
      sym_literal_definition,
      sym_type_definition,
      sym_class_declaration,
  [72] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(47), 1,
      anon_sym_QMARK,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 2,
      sym_uri,
      sym_identifier,
    STATE(35), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [99] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(47), 1,
      anon_sym_QMARK,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 2,
      sym_uri,
      sym_identifier,
    STATE(41), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [126] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(47), 1,
      anon_sym_QMARK,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 2,
      sym_uri,
      sym_identifier,
    STATE(23), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [153] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(47), 1,
      anon_sym_QMARK,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 2,
      sym_uri,
      sym_identifier,
    STATE(33), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [180] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(47), 1,
      anon_sym_QMARK,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 2,
      sym_uri,
      sym_identifier,
    STATE(31), 5,
      sym__type,
      sym_optional,
      sym_reference,
      sym_product,
      sym_coproduct,
  [207] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_namespace,
      anon_sym_literal,
      anon_sym_type,
      anon_sym_class,
  [220] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(71), 1,
      sym_term,
    STATE(10), 1,
      aux_sym_coproduct_repeat1,
    STATE(44), 1,
      sym_option,
  [242] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(74), 1,
      anon_sym_LF,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      sym_term,
    STATE(11), 1,
      aux_sym_product_repeat1,
    STATE(40), 1,
      sym_component,
  [264] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(85), 1,
      anon_sym_LF,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    ACTIONS(91), 1,
      sym_term,
    STATE(10), 1,
      aux_sym_coproduct_repeat1,
    STATE(44), 1,
      sym_option,
  [286] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      sym_term,
    STATE(11), 1,
      aux_sym_product_repeat1,
    STATE(40), 1,
      sym_component,
  [308] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(87), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_term,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_coproduct_repeat1,
    STATE(44), 1,
      sym_option,
  [330] = 7,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_term,
    ACTIONS(105), 1,
      anon_sym_LF,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_product_repeat1,
    STATE(40), 1,
      sym_component,
  [352] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(69), 4,
      anon_sym_LF,
      sym_comment,
      anon_sym_RBRACK,
      sym_term,
  [362] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(80), 4,
      anon_sym_LF,
      sym_comment,
      anon_sym_RBRACE,
      sym_term,
  [372] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
  [382] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [390] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [398] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_LF,
  [408] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [416] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [424] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [432] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [440] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(117), 1,
      anon_sym_LF,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [450] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [458] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [466] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [474] = 3,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
  [484] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [492] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [500] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [508] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(145), 1,
      anon_sym_DASH_GT,
  [515] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(147), 1,
      anon_sym_LF,
  [522] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(149), 1,
      sym_term,
  [529] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(151), 1,
      anon_sym_COLON_COLON,
  [536] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(153), 1,
      sym_term,
  [543] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(155), 1,
      sym_term,
  [550] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(157), 1,
      anon_sym_LF,
  [557] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(159), 1,
      anon_sym_LF,
  [564] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(161), 1,
      anon_sym_LT_DASH,
  [571] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(163), 1,
      sym_identifier,
  [578] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(165), 1,
      anon_sym_LF,
  [585] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(167), 1,
      sym_namespace_uri,
  [592] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [599] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(171), 1,
      sym_identifier,
  [606] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(117), 1,
      anon_sym_LF,
  [613] = 2,
    ACTIONS(3), 1,
      sym__,
    ACTIONS(173), 1,
      sym_identifier,
  [620] = 1,
    ACTIONS(175), 1,
      sym__,
  [624] = 1,
    ACTIONS(177), 1,
      sym__,
  [628] = 1,
    ACTIONS(179), 1,
      sym__,
  [632] = 1,
    ACTIONS(181), 1,
      sym__,
  [636] = 1,
    ACTIONS(183), 1,
      sym__,
  [640] = 1,
    ACTIONS(185), 1,
      sym__,
  [644] = 1,
    ACTIONS(187), 1,
      sym__,
  [648] = 1,
    ACTIONS(189), 1,
      sym__,
  [652] = 1,
    ACTIONS(191), 1,
      sym__,
  [656] = 1,
    ACTIONS(193), 1,
      sym__,
  [660] = 1,
    ACTIONS(195), 1,
      sym__,
  [664] = 1,
    ACTIONS(197), 1,
      sym__,
  [668] = 1,
    ACTIONS(199), 1,
      sym__,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 207,
  [SMALL_STATE(10)] = 220,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 264,
  [SMALL_STATE(13)] = 286,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 330,
  [SMALL_STATE(16)] = 352,
  [SMALL_STATE(17)] = 362,
  [SMALL_STATE(18)] = 372,
  [SMALL_STATE(19)] = 382,
  [SMALL_STATE(20)] = 390,
  [SMALL_STATE(21)] = 398,
  [SMALL_STATE(22)] = 408,
  [SMALL_STATE(23)] = 416,
  [SMALL_STATE(24)] = 424,
  [SMALL_STATE(25)] = 432,
  [SMALL_STATE(26)] = 440,
  [SMALL_STATE(27)] = 450,
  [SMALL_STATE(28)] = 458,
  [SMALL_STATE(29)] = 466,
  [SMALL_STATE(30)] = 474,
  [SMALL_STATE(31)] = 484,
  [SMALL_STATE(32)] = 492,
  [SMALL_STATE(33)] = 500,
  [SMALL_STATE(34)] = 508,
  [SMALL_STATE(35)] = 515,
  [SMALL_STATE(36)] = 522,
  [SMALL_STATE(37)] = 529,
  [SMALL_STATE(38)] = 536,
  [SMALL_STATE(39)] = 543,
  [SMALL_STATE(40)] = 550,
  [SMALL_STATE(41)] = 557,
  [SMALL_STATE(42)] = 564,
  [SMALL_STATE(43)] = 571,
  [SMALL_STATE(44)] = 578,
  [SMALL_STATE(45)] = 585,
  [SMALL_STATE(46)] = 592,
  [SMALL_STATE(47)] = 599,
  [SMALL_STATE(48)] = 606,
  [SMALL_STATE(49)] = 613,
  [SMALL_STATE(50)] = 620,
  [SMALL_STATE(51)] = 624,
  [SMALL_STATE(52)] = 628,
  [SMALL_STATE(53)] = 632,
  [SMALL_STATE(54)] = 636,
  [SMALL_STATE(55)] = 640,
  [SMALL_STATE(56)] = 644,
  [SMALL_STATE(57)] = 648,
  [SMALL_STATE(58)] = 652,
  [SMALL_STATE(59)] = 656,
  [SMALL_STATE(60)] = 660,
  [SMALL_STATE(61)] = 664,
  [SMALL_STATE(62)] = 668,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(10),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(44),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_coproduct_repeat1, 2), SHIFT_REPEAT(54),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(11),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(40),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_product_repeat1, 2), SHIFT_REPEAT(61),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 7, .production_id = 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_coproduct, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 5, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_definition, 5, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_product, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_definition, 5, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2, .production_id = 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 2, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, .production_id = 6),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 5, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
