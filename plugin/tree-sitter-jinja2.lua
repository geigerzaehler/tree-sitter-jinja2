local parser_file = vim.api.nvim_get_runtime_file("parser/jinja2.*", false)[1]
if not parser_file then return end

vim.treesitter.language.add("htmljinja", {
  path = parser_file,
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
