#include 
#include 
#include 
#include 

int main() {
    std::vector fruits = {"apple", "banana", "cherry"};
    auto lengths = fruits | std::views::transform([](const std::string& s) { return s.size(); });
    for (auto len : lengths) {
        std::cout << len << " ";
    }
    return 0;
}