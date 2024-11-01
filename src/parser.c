#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_desktop_entry_token1 = 1,
  sym_comment = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_EQ = 5,
  aux_sym_entry_token1 = 6,
  anon_sym_LBRACK2 = 7,
  anon_sym_RBRACK2 = 8,
  anon_sym__ = 9,
  anon_sym_DOT = 10,
  anon_sym_AT = 11,
  sym_language = 12,
  sym_country = 13,
  aux_sym_encoding_token1 = 14,
  sym_true = 15,
  sym_false = 16,
  aux_sym_string_token1 = 17,
  sym_escape_sequence = 18,
  sym_field_code = 19,
  anon_sym_SEMI = 20,
  sym_group_name = 21,
  sym_identifier = 22,
  sym_desktop_entry = 23,
  sym_group = 24,
  sym_header = 25,
  sym_entry = 26,
  sym_localized_key = 27,
  sym_locale = 28,
  sym_encoding = 29,
  sym_modifier = 30,
  sym_string = 31,
  sym_list = 32,
  aux_sym_desktop_entry_repeat1 = 33,
  aux_sym_desktop_entry_repeat2 = 34,
  aux_sym_group_repeat1 = 35,
  aux_sym_string_repeat1 = 36,
  aux_sym_list_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_desktop_entry_token1] = "desktop_entry_token1",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [aux_sym_entry_token1] = "entry_token1",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_RBRACK2] = "]",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [anon_sym_AT] = "@",
  [sym_language] = "language",
  [sym_country] = "country",
  [aux_sym_encoding_token1] = "encoding_token1",
  [sym_true] = "true",
  [sym_false] = "false",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_field_code] = "field_code",
  [anon_sym_SEMI] = ";",
  [sym_group_name] = "group_name",
  [sym_identifier] = "identifier",
  [sym_desktop_entry] = "desktop_entry",
  [sym_group] = "group",
  [sym_header] = "header",
  [sym_entry] = "entry",
  [sym_localized_key] = "localized_key",
  [sym_locale] = "locale",
  [sym_encoding] = "encoding",
  [sym_modifier] = "modifier",
  [sym_string] = "string",
  [sym_list] = "list",
  [aux_sym_desktop_entry_repeat1] = "desktop_entry_repeat1",
  [aux_sym_desktop_entry_repeat2] = "desktop_entry_repeat2",
  [aux_sym_group_repeat1] = "group_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_desktop_entry_token1] = aux_sym_desktop_entry_token1,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_entry_token1] = aux_sym_entry_token1,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_RBRACK2] = anon_sym_RBRACK,
  [anon_sym__] = anon_sym__,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AT] = anon_sym_AT,
  [sym_language] = sym_language,
  [sym_country] = sym_country,
  [aux_sym_encoding_token1] = aux_sym_encoding_token1,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_field_code] = sym_field_code,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_group_name] = sym_group_name,
  [sym_identifier] = sym_identifier,
  [sym_desktop_entry] = sym_desktop_entry,
  [sym_group] = sym_group,
  [sym_header] = sym_header,
  [sym_entry] = sym_entry,
  [sym_localized_key] = sym_localized_key,
  [sym_locale] = sym_locale,
  [sym_encoding] = sym_encoding,
  [sym_modifier] = sym_modifier,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [aux_sym_desktop_entry_repeat1] = aux_sym_desktop_entry_repeat1,
  [aux_sym_desktop_entry_repeat2] = aux_sym_desktop_entry_repeat2,
  [aux_sym_group_repeat1] = aux_sym_group_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_desktop_entry_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_entry_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [sym_country] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_encoding_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_field_code] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_group_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_desktop_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_localized_key] = {
    .visible = true,
    .named = true,
  },
  [sym_locale] = {
    .visible = true,
    .named = true,
  },
  [sym_encoding] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_desktop_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_desktop_entry_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_locale = 2,
  field_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_locale] = "locale",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_locale, 2},
    {field_name, 0},
  [2] =
    {field_key, 0},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '\n', 20,
        '#', 3,
        '%', 13,
        '-', 39,
        '.', 29,
        ';', 59,
        '=', 24,
        '@', 30,
        '[', 26,
        '\\', 12,
        ']', 27,
        '_', 28,
        'f', 31,
        't', 35,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1);
      if (lookahead == ' ') ADVANCE(60);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(57);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '%', 58,
        'D', 58,
        'F', 58,
        'N', 58,
        'U', 58,
        'c', 58,
        'd', 58,
        'f', 58,
        'i', 58,
        'k', 58,
        'm', 58,
        'n', 58,
        'u', 58,
        'v', 58,
      );
      END_STATE();
    case 14:
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 15:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 16:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '\n', 20,
        '#', 3,
        '%', 13,
        ';', 59,
        '=', 24,
        '[', 22,
        '\\', 12,
        ']', 23,
        'f', 62,
        't', 66,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_desktop_entry_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_entry_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 's') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_language);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_country);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_country);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_encoding_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(50);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 't')) ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token1);
      ADVANCE_MAP(
        '%', 58,
        'D', 58,
        'F', 58,
        'N', 58,
        'U', 58,
        'c', 58,
        'd', 58,
        'f', 58,
        'i', 58,
        'k', 58,
        'm', 58,
        'n', 58,
        'u', 58,
        'v', 58,
      );
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_field_code);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_group_name);
      if (lookahead == ' ') ADVANCE(60);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_group_name);
      if ((' ' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
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
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_desktop_entry_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_language] = ACTIONS(1),
    [sym_country] = ACTIONS(1),
    [aux_sym_encoding_token1] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_field_code] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_desktop_entry] = STATE(37),
    [sym_group] = STATE(17),
    [sym_header] = STATE(2),
    [aux_sym_desktop_entry_repeat1] = STATE(3),
    [aux_sym_desktop_entry_repeat2] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_desktop_entry_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(35), 1,
      sym_localized_key,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(11), 2,
      aux_sym_desktop_entry_token1,
      sym_comment,
    STATE(4), 2,
      sym_entry,
      aux_sym_group_repeat1,
  [19] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_header,
    STATE(11), 1,
      aux_sym_desktop_entry_repeat1,
    ACTIONS(17), 2,
      aux_sym_desktop_entry_token1,
      sym_comment,
    STATE(16), 2,
      sym_group,
      aux_sym_desktop_entry_repeat2,
  [40] = 5,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(35), 1,
      sym_localized_key,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(21), 2,
      aux_sym_desktop_entry_token1,
      sym_comment,
    STATE(5), 2,
      sym_entry,
      aux_sym_group_repeat1,
  [59] = 5,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(35), 1,
      sym_localized_key,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(25), 2,
      aux_sym_desktop_entry_token1,
      sym_comment,
    STATE(5), 2,
      sym_entry,
      aux_sym_group_repeat1,
  [78] = 5,
    STATE(7), 1,
      aux_sym_string_repeat1,
    STATE(19), 1,
      sym_string,
    STATE(45), 1,
      sym_list,
    ACTIONS(31), 2,
      sym_true,
      sym_false,
    ACTIONS(33), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [97] = 3,
    STATE(8), 1,
      aux_sym_string_repeat1,
    ACTIONS(35), 2,
      aux_sym_desktop_entry_token1,
      anon_sym_SEMI,
    ACTIONS(37), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [110] = 3,
    STATE(8), 1,
      aux_sym_string_repeat1,
    ACTIONS(39), 2,
      aux_sym_desktop_entry_token1,
      anon_sym_SEMI,
    ACTIONS(41), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [123] = 4,
    ACTIONS(44), 1,
      aux_sym_desktop_entry_token1,
    STATE(7), 1,
      aux_sym_string_repeat1,
    STATE(28), 1,
      sym_string,
    ACTIONS(33), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [138] = 4,
    ACTIONS(46), 1,
      aux_sym_desktop_entry_token1,
    STATE(7), 1,
      aux_sym_string_repeat1,
    STATE(28), 1,
      sym_string,
    ACTIONS(33), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [153] = 3,
    STATE(11), 1,
      aux_sym_desktop_entry_repeat1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(50), 2,
      aux_sym_desktop_entry_token1,
      sym_comment,
  [165] = 4,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_header,
    STATE(12), 2,
      sym_group,
      aux_sym_desktop_entry_repeat2,
  [179] = 1,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      aux_sym_desktop_entry_token1,
      sym_comment,
      anon_sym_LBRACK,
      sym_identifier,
  [187] = 3,
    STATE(7), 1,
      aux_sym_string_repeat1,
    STATE(28), 1,
      sym_string,
    ACTIONS(33), 3,
      aux_sym_string_token1,
      sym_escape_sequence,
      sym_field_code,
  [199] = 1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      aux_sym_desktop_entry_token1,
      sym_comment,
      anon_sym_LBRACK,
      sym_identifier,
  [207] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_header,
    STATE(12), 2,
      sym_group,
      aux_sym_desktop_entry_repeat2,
  [221] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_header,
    STATE(12), 2,
      sym_group,
      aux_sym_desktop_entry_repeat2,
  [235] = 4,
    ACTIONS(64), 1,
      anon_sym_RBRACK2,
    ACTIONS(66), 1,
      anon_sym__,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      anon_sym_AT,
  [248] = 3,
    ACTIONS(72), 1,
      aux_sym_desktop_entry_token1,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      aux_sym_list_repeat1,
  [258] = 3,
    ACTIONS(76), 1,
      aux_sym_desktop_entry_token1,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      aux_sym_list_repeat1,
  [268] = 3,
    ACTIONS(80), 1,
      anon_sym_RBRACK2,
    ACTIONS(82), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      anon_sym_AT,
  [278] = 3,
    ACTIONS(86), 1,
      aux_sym_desktop_entry_token1,
    ACTIONS(88), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      aux_sym_list_repeat1,
  [288] = 2,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(93), 1,
      anon_sym_LBRACK2,
  [295] = 2,
    ACTIONS(95), 1,
      aux_sym_encoding_token1,
    STATE(43), 1,
      sym_modifier,
  [302] = 2,
    ACTIONS(97), 1,
      aux_sym_encoding_token1,
    STATE(27), 1,
      sym_encoding,
  [309] = 1,
    ACTIONS(99), 2,
      anon_sym_RBRACK2,
      anon_sym_AT,
  [314] = 2,
    ACTIONS(80), 1,
      anon_sym_RBRACK2,
    ACTIONS(84), 1,
      anon_sym_AT,
  [321] = 1,
    ACTIONS(86), 2,
      aux_sym_desktop_entry_token1,
      anon_sym_SEMI,
  [326] = 2,
    ACTIONS(101), 1,
      anon_sym_RBRACK2,
    ACTIONS(103), 1,
      anon_sym_AT,
  [333] = 2,
    ACTIONS(105), 1,
      sym_language,
    STATE(41), 1,
      sym_locale,
  [340] = 2,
    ACTIONS(95), 1,
      aux_sym_encoding_token1,
    STATE(46), 1,
      sym_modifier,
  [347] = 2,
    ACTIONS(97), 1,
      aux_sym_encoding_token1,
    STATE(29), 1,
      sym_encoding,
  [354] = 2,
    ACTIONS(95), 1,
      aux_sym_encoding_token1,
    STATE(47), 1,
      sym_modifier,
  [361] = 1,
    ACTIONS(107), 1,
      sym_country,
  [365] = 1,
    ACTIONS(91), 1,
      anon_sym_EQ,
  [369] = 1,
    ACTIONS(109), 1,
      anon_sym_EQ,
  [373] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [377] = 1,
    ACTIONS(113), 1,
      sym_group_name,
  [381] = 1,
    ACTIONS(115), 1,
      aux_sym_desktop_entry_token1,
  [385] = 1,
    ACTIONS(117), 1,
      aux_sym_entry_token1,
  [389] = 1,
    ACTIONS(119), 1,
      anon_sym_RBRACK2,
  [393] = 1,
    ACTIONS(121), 1,
      anon_sym_RBRACK2,
  [397] = 1,
    ACTIONS(80), 1,
      anon_sym_RBRACK2,
  [401] = 1,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
  [405] = 1,
    ACTIONS(72), 1,
      aux_sym_desktop_entry_token1,
  [409] = 1,
    ACTIONS(101), 1,
      anon_sym_RBRACK2,
  [413] = 1,
    ACTIONS(125), 1,
      anon_sym_RBRACK2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 59,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 165,
  [SMALL_STATE(13)] = 179,
  [SMALL_STATE(14)] = 187,
  [SMALL_STATE(15)] = 199,
  [SMALL_STATE(16)] = 207,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 235,
  [SMALL_STATE(19)] = 248,
  [SMALL_STATE(20)] = 258,
  [SMALL_STATE(21)] = 268,
  [SMALL_STATE(22)] = 278,
  [SMALL_STATE(23)] = 288,
  [SMALL_STATE(24)] = 295,
  [SMALL_STATE(25)] = 302,
  [SMALL_STATE(26)] = 309,
  [SMALL_STATE(27)] = 314,
  [SMALL_STATE(28)] = 321,
  [SMALL_STATE(29)] = 326,
  [SMALL_STATE(30)] = 333,
  [SMALL_STATE(31)] = 340,
  [SMALL_STATE(32)] = 347,
  [SMALL_STATE(33)] = 354,
  [SMALL_STATE(34)] = 361,
  [SMALL_STATE(35)] = 365,
  [SMALL_STATE(36)] = 369,
  [SMALL_STATE(37)] = 373,
  [SMALL_STATE(38)] = 377,
  [SMALL_STATE(39)] = 381,
  [SMALL_STATE(40)] = 385,
  [SMALL_STATE(41)] = 389,
  [SMALL_STATE(42)] = 393,
  [SMALL_STATE(43)] = 397,
  [SMALL_STATE(44)] = 401,
  [SMALL_STATE(45)] = 405,
  [SMALL_STATE(46)] = 409,
  [SMALL_STATE(47)] = 413,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desktop_entry, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desktop_entry, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_desktop_entry_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_desktop_entry_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_desktop_entry_repeat2, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_desktop_entry_repeat2, 2, 0, 0), SHIFT_REPEAT(38),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 5, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desktop_entry, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locale, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locale, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encoding, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locale, 5, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_localized_key, 4, 0, 1),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locale, 7, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_desktop(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
