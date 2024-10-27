# Tree-sitter grammar for Bond schemas

A [Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for the Microsoft [Bond](https://github.com/microsoft/bond) schema file format.

Contains highlights and indent queries for use in editors in `queries/`. Tested on Neovim.

## Features
The grammar supports the following more advanced Bond features: 
- Structs (with Base class)
- Struct views
- Enums
- Using statements
- Builtin types (int, string, bool, vector<T>, list<T>, map<T>, set<T>, ..)
- Generics
