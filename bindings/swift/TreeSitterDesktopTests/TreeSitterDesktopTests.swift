import XCTest
import SwiftTreeSitter
import TreeSitterDesktop

final class TreeSitterDesktopTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_desktop())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Desktop grammar")
    }
}
