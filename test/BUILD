cc_test (
    name = "mytests",
    srcs = glob(["**/*.cpp", "**/*.hpp"]),
    deps = [
        "//mylib:mylib",
        "@gtest//:gtest",
        "@gtest//:gtest_main" # Only if hello_test.cc has no main()
    ],
)
