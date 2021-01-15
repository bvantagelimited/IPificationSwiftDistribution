// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "IPificationFramework",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        .library(
            name: "IPificationFramework", 
            targets: ["IPificationFramework"])
    ],
    targets: [
        .binaryTarget(
            name: "IPificationFramework", 
            path: "IPificationSDK.xcframework")
    ])
