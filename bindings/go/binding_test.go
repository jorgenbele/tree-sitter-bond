package tree_sitter_bond_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_bond "github.com/jorgenbele/tree-sitter-bond/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_bond.Language())
	if language == nil {
		t.Errorf("Error loading Bond grammar")
	}
}
