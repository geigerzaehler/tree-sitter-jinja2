local M = {}

function M.setup()
  -- htmljinja is its own language backed by the jinja2 parser, so it loads
  -- queries/htmljinja/ (which injects html into template text). Registering
  -- htmljinja as the jinja2 filetype instead would load queries/jinja2/ and
  -- lose the html injection.
  local parser = vim.api.nvim_get_runtime_file("parser/jinja2.so", false)[1]
  if parser then
    vim.treesitter.language.add(
      "htmljinja",
      { path = parser, symbol_name = "jinja2" }
    )
  end

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

  vim.api.nvim_create_autocmd("FileType", {
    pattern = { "jinja2", "htmljinja" },
    callback = function()
      vim.treesitter.start()
    end,
  })
end

return M
