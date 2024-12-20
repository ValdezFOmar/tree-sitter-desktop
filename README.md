# tree-sitter-desktop

[![CI][ci]](https://github.com/ValdezFOmar/tree-sitter-desktop/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
<!-- [![npm][npm]](https://www.npmjs.com/package/tree-sitter-desktop) -->
<!-- [![crates][crates]](https://crates.io/crates/tree-sitter-desktop) -->
<!-- [![pypi][pypi]](https://pypi.org/project/tree-sitter-desktop/) -->

A tree-sitter parser for `.desktop` and `.directory` files, defined by
the [Desktop Entry Specification][specification].

## References

- [File format][file-format] as defined by the [Desktop Entry Specification][specification]

## Editors

### Neovim

You can install this parser using [`nvim-treesitter`][nvim-treesitter],
run `TSInstall desktop`.


[ci]: https://img.shields.io/github/actions/workflow/status/ValdezFOmar/tree-sitter-desktop/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[npm]: https://img.shields.io/npm/v/tree-sitter-desktop?logo=npm
[crates]: https://img.shields.io/crates/v/tree-sitter-desktop?logo=rust
[pypi]: https://img.shields.io/pypi/v/tree-sitter-desktop?logo=pypi&logoColor=ffd242

[specification]: https://specifications.freedesktop.org/desktop-entry-spec/latest/index.html
[file-format]: https://specifications.freedesktop.org/desktop-entry-spec/latest/basic-format.html
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
