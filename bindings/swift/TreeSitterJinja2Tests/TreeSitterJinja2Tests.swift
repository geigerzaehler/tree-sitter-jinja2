import XCTest
import SwiftTreeSitter
import TreeSitterJinja2

final class TreeSitterJinja2Tests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_jinja2())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Jinja2 grammar")
    }
}
