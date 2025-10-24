#include 
#include "cli_parser.h"

TEST_CASE("CLI argument parsing", "[cli]") {
    SECTION("Valid arguments") {
        const char* argv[] = {"./tool", "--input", "data.txt", "--output", "result.txt"};
        auto args = parse_args(5, argv);
        REQUIRE(args.input_file == "data.txt");
        REQUIRE(args.output_file == "result.txt");
    }
    SECTION("Missing required argument") {
        const char* argv[] = {"./tool", "--output", "result.txt"};
        REQUIRE_THROWS_AS(parse_args(3, argv), std::invalid_argument);
    }
}