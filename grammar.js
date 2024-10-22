/**
 * @file Desktop grammar for tree-sitter
 * @author Omar Valdez <omarantoniovaldezf2@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const NEWLINE = /\n/;

module.exports = grammar({
  name: "desktop",

  extras: _ => [/[ \t]/],

  rules: {
    desktop_entry: $ => seq(
      repeat(choice($.comment, NEWLINE)),
      repeat($.group),
    ),

    comment: _ => /#.*/,

    group: $ => seq(
      $.header,
      repeat($._line),
    ),

    header: $ => seq('[', $.group_name, ']', NEWLINE),

    _line: $ => seq(optional(choice($.comment, $.entry)), NEWLINE),

    entry: $ => seq(
      field('key', $.identifier),
      '=',
      /[ \t]*/,
      field('value', $._value),
    ),

    _value: $ => choice(
      $.true,
      $.false,
      $.string,
      $.list,
    ),

    true: _ => 'true',

    false: _ => 'false',

    string: _ => /[^;\n\r]+/,

    list: $ => choice(
      seq($.string, ';'),
      seq($.string, repeat1(seq(';', $.string)), optional(';'))
    ),

    // Group names may contain all ASCII characters, except for '[', ']' and control characters.
    group_name: _ => /[\x20-\x5A\x5C\x5E-\x7E]+/,

    identifier: _ => /[A-Za-z0-9-]+/,
  }
});
