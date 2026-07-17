# AGENTS.md

This file provides guidance to coding agents when working with code in this repository.

## Commands

- `npm run build` — regenerate `src/parser.c` from `grammar.js` (`tree-sitter generate --no-bindings`). Run after every grammar edit.
- `npm test` / `make test` — run the corpus tests (`tree-sitter test`).
- Run a single test: `tree-sitter test -f '<test name>'` (the name is the header above the `===` divider in a corpus file).
- `./watch.sh` — regenerate + test on save (watches `grammar.js`, `test/corpus`, `queries` via `nodemon.json`).
- `npm run parse -- <file>` — parse a file and print its tree; use to debug grammar changes.
- `npm run build-wasm` — build the WASM parser.
- `make` — build the C shared/static library and pkg-config file for system install.

The `tree-sitter` CLI must be on `PATH` (it's a dev dependency; use `npx tree-sitter` or `pnpm exec` if not global).

## Architecture

Single source of truth is **`grammar.js`**. Everything in `src/` is generated — never edit it by hand; edit `grammar.js` and run `npm run build`.

### Grammar design

Jinja2 is a templating layer over arbitrary host text, so the grammar deliberately does **not** parse Jinja expressions. Instead:

- Expression/statement bodies are captured as opaque `expression` / `custom_tag` nodes via `_expression_in_statement` and `_output_code` (greedy char-class regexes). Downstream, `queries/*/injections.scm` injects the `python` parser into `expression` nodes for actual expression highlighting.
- `text` (template content between tags) is likewise opaque and injected with `html` in the `htmljinja` queries.
- `custom_statement` (`prec.dynamic(-1, ...)`) is the fallback for any `{% ... %}` block whose keyword isn't recognized, so unknown/custom tags parse instead of erroring.
- Whitespace-control markers (`{%-`, `-%}`, `+`) are folded into the aliased `statement_start`/`statement_end` tokens via the `statement()`/`statement_start()`/`statement_end()` helpers at the top of the file.

### Two languages, one parser

The parser exports the symbol `jinja2`, but the repo ships **two** tree-sitter languages backed by it, distinguished only by which query set loads:

- `queries/jinja2/` — plain Jinja templates.
- `queries/htmljinja/` — same parser, but `injections.scm` injects `html` into `text`, for HTML-with-Jinja files.

`lua/tree-sitter-jinja2.lua` (`M.setup()`) registers `htmljinja` as a distinct Nvim tree-sitter language pointing at the same `parser/jinja2.so` (`symbol_name = "jinja2"`), then maps file extensions to the `jinja2` / `htmljinja` filetypes. This is why `htmljinja` is a separate language rather than a filetype alias — a filetype alias would load `queries/jinja2/` and lose the HTML injection.

### Nvim plugin

The repo is also a self-contained Nvim plugin (no `nvim-treesitter`, requires Nvim 0.12+). `build.lua` runs on plugin install/update and compiles `parser/jinja2.so` via `tree-sitter build`. The committed `jinja2.so`/`parser.so` artifacts are build outputs.

### Bindings

`bindings/{c,go,node,python,rust,swift}` and their manifests (`Cargo.toml`, `pyproject.toml`, `setup.py`, `Package.swift`, `binding.gyp`) are standard tree-sitter multi-language bindings. They rarely need changes when editing the grammar.
