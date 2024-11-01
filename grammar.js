/**
 * @file Desktop grammar for tree-sitter
 * @author Omar Valdez <omarantoniovaldezf2@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const NEWLINE = /\n/;
const END_OF_LINE = NEWLINE;

module.exports = grammar({
  name: 'desktop',

  extras: _ => [/[ \t]/],

  rules: {
    desktop_entry: $ => seq(
      repeat(choice($.comment, NEWLINE)),
      repeat($.group),
    ),

    comment: _ => token(seq(/#.*/, END_OF_LINE)),

    group: $ => seq(
      $.header,
      repeat(choice(
        $.entry,
        $.comment,
        NEWLINE,
      )),
    ),

    header: $ => seq('[', $.group_name, ']', END_OF_LINE),

    entry: $ => seq(
      field('key', choice($.identifier, $.localized_key)),
      '=',
      /[ \t]*/,
      field('value', choice(
        $.true,
        $.false,
        $.string,
        $.list,
      )),
      END_OF_LINE,
    ),

    localized_key: $ => seq(
      field('name', $.identifier),
      token.immediate('['),
      field('locale', $.locale),
      token.immediate(']'),
    ),

    locale: $ => seq(
      $.language,
      optional(seq(token.immediate('_'), $.country)),
      optional(seq(token.immediate('.'), $.encoding)),
      optional(seq(token.immediate('@'), $.modifier)),
    ),

    language: _ => token.immediate(/[a-z-]+/),
    country: _ => token.immediate(/[a-zA-Z]+/),
    encoding: _ => token.immediate(/[a-zA-Z0-9-]+/),
    modifier: _ => token.immediate(/[a-zA-Z0-9-]+/),

    true: _ => 'true',
    false: _ => 'false',

    string: $ => repeat1(choice(/[^;\n\r]/, $.escape_sequence, $.field_code)),
    escape_sequence: _ => /\\[sntr\\;]/,
    field_code: _ => /%[%fFuUdDnNickvm]/,

    list: $ => choice(
      seq($.string, ';'),
      seq($.string, repeat1(seq(';', $.string)), optional(';')),
    ),

    // Group names may contain all ASCII characters, except for '[', ']' and control characters.
    group_name: _ => /[\x20-\x5A\x5C\x5E-\x7E]+/,

    identifier: _ => /[A-Za-z0-9-]+/,
  },
});
