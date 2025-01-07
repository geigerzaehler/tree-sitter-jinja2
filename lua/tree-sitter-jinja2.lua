local M = {}

function M.register_parser()
  local parsers = require("nvim-treesitter.parsers")

  -- Register the plugin path as a tree-sitter parser to nvim-treesitter.
  -- This is not required, but it allows nvim-treesitter to manage it e.g. :TS{Install,Update} jinja2
  local file = debug.getinfo(1).source:match("@(.*/)")
  local plugin_dir = vim.fn.fnamemodify(file, ":p:h:h")

  --- @type ParserInfo[]
  local parser_config

  if type(parsers.get_parser_configs) == "function" then
    parser_config = parsers.get_parser_configs()
  else
    -- "nvim-treesitter.parsers" exports the parser table itself starting nvim-treesitter v1.x
    parser_config = parsers
  end

  if type(parser_config.jinja2) == "table" then
    -- A jinja2 parser is already registered. Avoid overwriting it.
    return
  end

  parser_config.jinja2 = {
    install_info = {
      url = plugin_dir,
      files = { "src/parser.c" },
      branch = "main",
    },
    filetype = "jinja2",
  }
end

function M.init()
  M.register_parser()

  vim.treesitter.language.add("htmljinja", {
    path = vim.api.nvim_get_runtime_file("parser/jinja2.so", false)[1],
    symbol_name = "jinja2",
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
    },
  })
end

return M
