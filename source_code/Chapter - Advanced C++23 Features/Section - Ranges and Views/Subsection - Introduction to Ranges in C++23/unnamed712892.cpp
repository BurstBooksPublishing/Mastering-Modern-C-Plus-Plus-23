#include 
#include 
#include 
#include 
#include 

int main() {
    std::vector words = {"hello", "world", "c++23", "ranges"};
    auto upper_words = words | std::views::transform([](std::string s) {
        for (char& c : s) c = std::toupper(c);
        return s;
    });
    for (const auto& word : upper_words) {
        std::cout << word << " ";
    }
    return 0;
}