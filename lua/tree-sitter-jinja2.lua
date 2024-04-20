local M = {}


local install_info = {
  url = "https://github.com/geigerzaehler/tree-sitter-jinja2",
  files = { "src/parser.c" },
  branch = "main",
}

function M.register_parser()
  local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
  parser_config.jinja2 = {
    install_info = install_info,
    filetype = "jinja2",
  }
end

function M.init()
  M.register_parser()

  vim.treesitter.language.add("htmljinja", {
    path = vim.api.nvim_get_runtime_file("parser/jinja2.so", false)[1],
    symbol_name = "jinja2"
  })

  vim.filetype.add({
    extension = {
      j2 = "jinja2",
      jinja = "jinja2",
      jinja2 = "jinja2",
    },
    pattern = {
      [".*/jinja2/.*%.html"] = "htmljinja",
      [".*%.html%.j2"] = "htmljinja",
      [".*%.html%.jinja"] = "htmljinja",
      [".*%.html%.jinja2"] = "htmljinja",
    }
  })
end

return M
