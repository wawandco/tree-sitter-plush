/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "plush",

  extras: ($) => [
    /\s/, // Handle whitespace as an extra token
  ],

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      choice($.text, $.code_block, $.output_statement, $.comment),

    // Handles plain text outside of code blocks
    text: ($) => /[^<%]+/,

    // Handles code blocks like <% ... %>
    code_block: ($) => seq("<%", optional($.expression), "%>"),

    // Handles output statements like <%= ... %>
    output_statement: ($) => seq("<%=", $.expression, "%>"),

    // Handles comments like <%# ... %>
    comment: ($) =>
      seq(
        "<%#",
        /[^%]*%>/, // Match everything until the closing %>
      ),

    // Handles general expressions within code blocks
    expression: ($) =>
      choice(
        $.identifier,
        $.string,
        $.number,
        $.binary_expression,
        $.function_call,
        $.if_statement,
        $.loop_statement,
      ),

    // Handles if-else structures
    if_statement: ($) =>
      seq(
        "<%",
        "if",
        "{",
        $.expression,
        "%>",
        repeat($._statement),
        optional($.else_clause),
        "<%",
        "}",
        "%>",
      ),

    else_clause: ($) => seq("<%", "{", "else", "}", "%>"),

    // Handles loop constructs like for or foreach
    loop_statement: ($) =>
      seq(
        "<%",
        "for",
        "{",
        $.expression,
        "%>",
        repeat($._statement),
        "<%",
        "}",
        "%>",
      ),

    // Identifiers (variable names, function names, etc.)
    identifier: ($) => /[a-zA-Z_]\w*/,

    // String literals
    string: ($) => /"([^"\\]|\\.)*"/,

    // Numeric literals
    number: ($) => /\d+/,

    // Binary expressions (e.g., a + b)
    binary_expression: ($) =>
      prec.left(
        seq(
          $.expression,
          choice("==", "!=", "<", "<=", ">", ">=", "+", "-", "*", "/"),
          $.expression,
        ),
      ),

    // Function calls within code blocks
    function_call: ($) => seq($.identifier, "(", optional($.arguments), ")"),

    // Arguments to function calls
    arguments: ($) => seq($.expression, ","),
  },
});
