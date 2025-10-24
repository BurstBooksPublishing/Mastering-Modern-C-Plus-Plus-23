#include 
#include 
#include 

std::vector split_by_comma(const std::string& s) {
    std::vector result;
    size_t start = 0, end = s.find(',');
    while (end != std::string::npos) {
        result.push_back(s.substr(start, end - start));
        start = end + 1;
        end = s.find(',', start);
    }
    result.push_back(s.substr(start));
    return result;
}

TEST_CASE("Comma splitting", "[string_utils]") {
    REQUIRE(split_by_comma("a,b,c") == std::vector{"a", "b", "c"});
    REQUIRE(split_by_comma("") == std::vector{""});
    REQUIRE(split_by_comma("x,") == std::vector{"x", ""});
}