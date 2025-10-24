#include 
#include 

int main() {
    std::vector nums = {1, 2, 3, 4, 5};
    auto even = nums | std::views::filter([](int x) { return x % 2 == 0; });
    auto squared = even | std::views::transform([](int x) { return x * x; });
    
    for (auto x : squared) {
        std::cout << x << " ";
    }
}