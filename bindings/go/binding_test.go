package tree_sitter_plush_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_plush "github.com/tree-sitter/tree-sitter-plush/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_plush.Language())
	if language == nil {
		t.Errorf("Error loading Plush grammar")
	}
}
