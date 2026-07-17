# tree-sitter-jinja2

[Jinja2][] grammar for [tree-sitter].

Not everything may be implemented. If something isn’t working for you, file an
issue or create a pull-request.

## Nvim plugin

This repo is a self-contained Nvim plugin. It ships the queries, registers
the filetypes and languages, and compiles the parser on install — no
`nvim-treesitter` required. Requires Nvim 0.12 or later.

With [lazy][]:

```lua
{ "geigerzaehler/tree-sitter-jinja2", config = true }
```

`config = true` calls `require("tree-sitter-jinja2").setup()`, which registers
the filetypes and languages and starts the parser. On install and update lazy
runs [`build.lua`][], which compiles the parser into `parser/jinja2.so` using
the [`tree-sitter`][tree-sitter-cli] CLI (must be on `PATH`). Rebuild manually
with `:Lazy build tree-sitter-jinja2`.

### Without lazy

The plugin does not auto-initialize, so with any other setup you do two things
yourself:

1. Compile the parser once (and after each grammar update). From the plugin
   directory run `nvim -l build.lua`, or invoke the [`tree-sitter`][tree-sitter-cli]
   CLI directly:

   ```sh
   tree-sitter build --output parser/jinja2.so
   ```

2. Put the repo on the runtimepath (your plugin manager, or a native package
   under `pack/*/start/`) and call setup from your config:

   ```lua
   require("tree-sitter-jinja2").setup()
   ```

The plugin defines the filetype `jinja2` for files with the extensions `.j2`,
`.jinja`, `.jinja2`.

It also defines the filetype `htmljinja` for files with the extension
`.html.j2`, `.html.jinja`, `.html.jinja2` and `.html` files inside a `jinja2`
folder. `htmljinja` is registered as its own Tree-sitter language backed by the
jinja2 parser, so it loads `queries/htmljinja/`, which injects the `html`
parser into the template content.

[lazy]: https://github.com/folke/lazy.nvim#-plugin-spec
[`build.lua`]: ./build.lua
[jinja2]: https://jinja.palletsprojects.com/
[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[tree-sitter-cli]: https://github.com/tree-sitter/tree-sitter/tree/master/crates/cli
