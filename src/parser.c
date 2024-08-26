#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_text = 1,
  anon_sym_LT_PERCENT = 2,
  anon_sym_PERCENT_GT = 3,
  anon_sym_LT_PERCENT_EQ = 4,
  anon_sym_LT_PERCENT_POUND = 5,
  aux_sym_comment_token1 = 6,
  anon_sym_if = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_else = 10,
  anon_sym_for = 11,
  sym_identifier = 12,
  sym_string = 13,
  sym_number = 14,
  anon_sym_EQ_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_LT = 17,
  anon_sym_LT_EQ = 18,
  anon_sym_GT = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_COMMA = 27,
  sym_source_file = 28,
  sym__statement = 29,
  sym_code_block = 30,
  sym_output_statement = 31,
  sym_comment = 32,
  sym_expression = 33,
  sym_if_statement = 34,
  sym_else_clause = 35,
  sym_loop_statement = 36,
  sym_binary_expression = 37,
  sym_function_call = 38,
  sym_arguments = 39,
  aux_sym_source_file_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_code_block] = "code_block",
  [sym_output_statement] = "output_statement",
  [sym_comment] = "comment",
  [sym_expression] = "expression",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_loop_statement] = "loop_statement",
  [sym_binary_expression] = "binary_expression",
  [sym_function_call] = "function_call",
  [sym_arguments] = "arguments",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_code_block] = sym_code_block,
  [sym_output_statement] = sym_output_statement,
  [sym_comment] = sym_comment,
  [sym_expression] = sym_expression,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_loop_statement] = sym_loop_statement,
  [sym_binary_expression] = sym_binary_expression,
  [sym_function_call] = sym_function_call,
  [sym_arguments] = sym_arguments,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_if] = {
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
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_output_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 26,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 39,
  [44] = 40,
  [45] = 41,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 60,
  [64] = 64,
  [65] = 65,
  [66] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      ADVANCE_MAP(
        '!', 8,
        '"', 3,
        '%', 10,
        '(', 57,
        ')', 58,
        '*', 55,
        '+', 53,
        ',', 59,
        '-', 54,
        '/', 56,
        '<', 48,
        '=', 9,
        '>', 51,
        'e', 39,
        'f', 40,
        'i', 38,
        '{', 31,
        '}', 32,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 8,
        '%', 10,
        '(', 57,
        '*', 55,
        '+', 53,
        ',', 59,
        '-', 54,
        '/', 56,
        '<', 49,
        '=', 9,
        '>', 51,
        'e', 14,
        'f', 15,
        'i', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(11);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '<') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '<') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '<') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '%') ADVANCE(24);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__statement] = STATE(25),
    [sym_code_block] = STATE(25),
    [sym_output_statement] = STATE(25),
    [sym_comment] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 10,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
  [20] = 2,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 10,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
  [37] = 2,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 10,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
  [54] = 2,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 10,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
  [71] = 2,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 10,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
  [88] = 2,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 10,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
  [105] = 8,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(41), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(16), 1,
      sym_expression,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [134] = 8,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(41), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_expression,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [163] = 2,
    ACTIONS(15), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 10,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
  [180] = 2,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 10,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
  [197] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 10,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
  [214] = 2,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 10,
      anon_sym_PERCENT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_COMMA,
  [231] = 3,
    ACTIONS(65), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [249] = 3,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [267] = 3,
    ACTIONS(73), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [285] = 7,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_expression,
    STATE(64), 1,
      sym_arguments,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [311] = 3,
    ACTIONS(77), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [329] = 7,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(41), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_expression,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [355] = 7,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(41), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_expression,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [381] = 3,
    ACTIONS(83), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [399] = 3,
    ACTIONS(85), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [417] = 3,
    ACTIONS(87), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
  [435] = 6,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_PERCENT_GT,
    STATE(14), 1,
      sym_expression,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [458] = 6,
    ACTIONS(7), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_EQ,
    ACTIONS(11), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_text,
    STATE(26), 5,
      sym__statement,
      sym_code_block,
      sym_output_statement,
      sym_comment,
      aux_sym_source_file_repeat1,
  [481] = 6,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      sym_text,
    ACTIONS(100), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(103), 1,
      anon_sym_LT_PERCENT_EQ,
    ACTIONS(106), 1,
      anon_sym_LT_PERCENT_POUND,
    STATE(26), 5,
      sym__statement,
      sym_code_block,
      sym_output_statement,
      sym_comment,
      aux_sym_source_file_repeat1,
  [504] = 6,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(41), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(16), 1,
      sym_expression,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [527] = 6,
    ACTIONS(109), 1,
      sym_text,
    ACTIONS(111), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(113), 1,
      anon_sym_LT_PERCENT_EQ,
    ACTIONS(115), 1,
      anon_sym_LT_PERCENT_POUND,
    STATE(61), 1,
      sym_else_clause,
    STATE(29), 5,
      sym__statement,
      sym_code_block,
      sym_output_statement,
      sym_comment,
      aux_sym_source_file_repeat1,
  [550] = 6,
    ACTIONS(113), 1,
      anon_sym_LT_PERCENT_EQ,
    ACTIONS(115), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(117), 1,
      sym_text,
    ACTIONS(119), 1,
      anon_sym_LT_PERCENT,
    STATE(52), 1,
      sym_else_clause,
    STATE(34), 5,
      sym__statement,
      sym_code_block,
      sym_output_statement,
      sym_comment,
      aux_sym_source_file_repeat1,
  [573] = 5,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [593] = 5,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(18), 1,
      sym_expression,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [613] = 5,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(23), 1,
      sym_expression,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [633] = 5,
    ACTIONS(113), 1,
      anon_sym_LT_PERCENT_EQ,
    ACTIONS(115), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(121), 1,
      sym_text,
    ACTIONS(123), 1,
      anon_sym_LT_PERCENT,
    STATE(37), 5,
      sym__statement,
      sym_code_block,
      sym_output_statement,
      sym_comment,
      aux_sym_source_file_repeat1,
  [653] = 5,
    ACTIONS(125), 1,
      sym_text,
    ACTIONS(128), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(131), 1,
      anon_sym_LT_PERCENT_EQ,
    ACTIONS(134), 1,
      anon_sym_LT_PERCENT_POUND,
    STATE(34), 5,
      sym__statement,
      sym_code_block,
      sym_output_statement,
      sym_comment,
      aux_sym_source_file_repeat1,
  [673] = 5,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(12), 1,
      sym_expression,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [693] = 5,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(22), 1,
      sym_expression,
    ACTIONS(49), 2,
      sym_string,
      sym_number,
    STATE(10), 4,
      sym_if_statement,
      sym_loop_statement,
      sym_binary_expression,
      sym_function_call,
  [713] = 5,
    ACTIONS(113), 1,
      anon_sym_LT_PERCENT_EQ,
    ACTIONS(115), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(117), 1,
      sym_text,
    ACTIONS(137), 1,
      anon_sym_LT_PERCENT,
    STATE(34), 5,
      sym__statement,
      sym_code_block,
      sym_output_statement,
      sym_comment,
      aux_sym_source_file_repeat1,
  [733] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(141), 3,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
  [743] = 2,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(145), 3,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
  [753] = 2,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(149), 3,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
  [763] = 2,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(153), 3,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
  [773] = 2,
    ACTIONS(139), 1,
      sym_text,
    ACTIONS(141), 3,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
  [782] = 2,
    ACTIONS(143), 1,
      sym_text,
    ACTIONS(145), 3,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
  [791] = 2,
    ACTIONS(147), 1,
      sym_text,
    ACTIONS(149), 3,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
  [800] = 2,
    ACTIONS(151), 1,
      sym_text,
    ACTIONS(153), 3,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
  [809] = 2,
    ACTIONS(155), 1,
      anon_sym_if,
    ACTIONS(157), 1,
      anon_sym_for,
  [816] = 1,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
  [820] = 1,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
  [824] = 1,
    ACTIONS(163), 1,
      anon_sym_else,
  [828] = 1,
    ACTIONS(165), 1,
      anon_sym_PERCENT_GT,
  [832] = 1,
    ACTIONS(167), 1,
      anon_sym_PERCENT_GT,
  [836] = 1,
    ACTIONS(169), 1,
      anon_sym_LT_PERCENT,
  [840] = 1,
    ACTIONS(171), 1,
      anon_sym_PERCENT_GT,
  [844] = 1,
    ACTIONS(173), 1,
      anon_sym_PERCENT_GT,
  [848] = 1,
    ACTIONS(175), 1,
      anon_sym_LT_PERCENT,
  [852] = 1,
    ACTIONS(177), 1,
      anon_sym_PERCENT_GT,
  [856] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
  [860] = 1,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
  [864] = 1,
    ACTIONS(181), 1,
      anon_sym_PERCENT_GT,
  [868] = 1,
    ACTIONS(183), 1,
      aux_sym_comment_token1,
  [872] = 1,
    ACTIONS(185), 1,
      anon_sym_LT_PERCENT,
  [876] = 1,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
  [880] = 1,
    ACTIONS(189), 1,
      aux_sym_comment_token1,
  [884] = 1,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
  [888] = 1,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
  [892] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 37,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 105,
  [SMALL_STATE(9)] = 134,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 197,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 249,
  [SMALL_STATE(16)] = 267,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 311,
  [SMALL_STATE(19)] = 329,
  [SMALL_STATE(20)] = 355,
  [SMALL_STATE(21)] = 381,
  [SMALL_STATE(22)] = 399,
  [SMALL_STATE(23)] = 417,
  [SMALL_STATE(24)] = 435,
  [SMALL_STATE(25)] = 458,
  [SMALL_STATE(26)] = 481,
  [SMALL_STATE(27)] = 504,
  [SMALL_STATE(28)] = 527,
  [SMALL_STATE(29)] = 550,
  [SMALL_STATE(30)] = 573,
  [SMALL_STATE(31)] = 593,
  [SMALL_STATE(32)] = 613,
  [SMALL_STATE(33)] = 633,
  [SMALL_STATE(34)] = 653,
  [SMALL_STATE(35)] = 673,
  [SMALL_STATE(36)] = 693,
  [SMALL_STATE(37)] = 713,
  [SMALL_STATE(38)] = 733,
  [SMALL_STATE(39)] = 743,
  [SMALL_STATE(40)] = 753,
  [SMALL_STATE(41)] = 763,
  [SMALL_STATE(42)] = 773,
  [SMALL_STATE(43)] = 782,
  [SMALL_STATE(44)] = 791,
  [SMALL_STATE(45)] = 800,
  [SMALL_STATE(46)] = 809,
  [SMALL_STATE(47)] = 816,
  [SMALL_STATE(48)] = 820,
  [SMALL_STATE(49)] = 824,
  [SMALL_STATE(50)] = 828,
  [SMALL_STATE(51)] = 832,
  [SMALL_STATE(52)] = 836,
  [SMALL_STATE(53)] = 840,
  [SMALL_STATE(54)] = 844,
  [SMALL_STATE(55)] = 848,
  [SMALL_STATE(56)] = 852,
  [SMALL_STATE(57)] = 856,
  [SMALL_STATE(58)] = 860,
  [SMALL_STATE(59)] = 864,
  [SMALL_STATE(60)] = 868,
  [SMALL_STATE(61)] = 872,
  [SMALL_STATE(62)] = 876,
  [SMALL_STATE(63)] = 880,
  [SMALL_STATE(64)] = 884,
  [SMALL_STATE(65)] = 888,
  [SMALL_STATE(66)] = 892,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 10, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 10, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 9, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 9, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 9, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 8, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 8, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_statement, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_statement, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 5, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [195] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_plush(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
