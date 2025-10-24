#include 
#include 

auto square = [](int x) { return x * x; };  // Feature A

int main() {
    std::vector nums = {1, 2, 3, 4, 5};
    auto even = nums | std::views::filter([](int x) { return x % 2 == 0; }); // Feature B
    auto result = std::ranges::transform_view(even, square); // Feature C
}