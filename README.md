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

## How to use in Neovim
Add the following to your `init.lua`.

```lua
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.bond = {
  install_info = {
    url = "https://github.com/jorgenbele/tree-sitter-bond", -- local path or git repo
    files = {"src/parser.c"}, -- note that some parsers also require src/scanner.c or src/scanner.cc
    -- optional entries:
    branch = "master", -- default branch in case of git repo if different from master
    generate_requires_npm = false, -- if stand-alone parser without npm dependencies
    requires_generate_from_grammar = false, -- if folder contains pre-generated src/parser.c
  },
  filetype = "bond", -- if filetype does not match the parser name
}

vim.treesitter.language.register('bond', 'bond')

vim.filetype.add({
  -- Detect and assign filetype based on the extension of the filename
  extension = {
    bond = "bond",
  },
})
```
