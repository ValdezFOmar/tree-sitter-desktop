/**
 * @file Desktop grammar for tree-sitter
 * @author Omar Valdez <omarantoniovaldezf2@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "desktop",

  rules: {
    desktop_entry: $ => '',
  }
});
