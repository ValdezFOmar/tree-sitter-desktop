package tree_sitter_desktop_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_desktop "github.com/valdezfomar/tree-sitter-desktop/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_desktop.Language())
	if language == nil {
		t.Errorf("Error loading Desktop grammar")
	}
}
