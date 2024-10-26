// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterBond",
    products: [
        .library(name: "TreeSitterBond", targets: ["TreeSitterBond"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterBond",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterBondTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterBond",
            ],
            path: "bindings/swift/TreeSitterBondTests"
        )
    ],
    cLanguageStandard: .c11
)
