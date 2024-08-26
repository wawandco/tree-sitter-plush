import XCTest
import SwiftTreeSitter
import TreeSitterPlush

final class TreeSitterPlushTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_plush())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Plush grammar")
    }
}
