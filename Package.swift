// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "IPificationSDK",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        .library(
            name: "IPificationSDK", 
            targets: ["IPificationSDK"])
    ],
    targets: [
        .binaryTarget(
            name: "IPificationSDK", 
            path: "IPificationSDK.xcframework")
    ])
