import XCTest
import SwiftTreeSitter
import TreeSitterBond

final class TreeSitterBondTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_bond())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Bond grammar")
    }
}
