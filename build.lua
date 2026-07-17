local dir = vim.fn.fnamemodify(debug.getinfo(1, "S").source:sub(2), ":p:h")
local r = vim
  .system({ "tree-sitter", "build", "--output", "parser/jinja2.so" }, { cwd = dir })
  :wait()
assert(r.code == 0, r.stderr)
