# tree-sitter-jinja2

[Jinja2][] grammar for [tree-sitter].

Not everything may be implemented. If something isn’t working for you, file an
issue or create a pull-request.

## Neovim plugin

To use this grammar in Neovim for syntax highlighting, etc., you can install
this repo as a plugin.

With [lazy][]

```lua
use { "geigerzaehler/tree-sitter-jinja2" }
```

You will have to compile the Tree-sitter parser on your machine.  This requires
all the dependencies necessary for compiling Tree-sitter grammars in general.

```sh
make nvim-install
```

The plugin defines the filetype `jinja2` for files with the extensions `.j2`,
`.jinja`, `.jinja2`.

It also defines the file type `htmljinja` for files with the extension
`.html.j2`, `.html.jinja`, `.html.jinja2` and `.html` files inside a `jinja2`
folder. For this filetype the HTML parser is used for the template content.

[lazy]: https://github.com/folke/lazy.nvim#-plugin-spec
[jinja2]: https://jinja.palletsprojects.com/
[tree-sitter]: https://github.com/tree-sitter/tree-sitter
