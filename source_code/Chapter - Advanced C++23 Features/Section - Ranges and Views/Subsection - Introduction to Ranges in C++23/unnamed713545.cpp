#include 
#include 
#include 

int main() {
    std::vector values = {-3, -1, 0, 2, 4, -5, 6};
    auto processed = values 
        | std::views::filter([](int n) { return n >= 0; })
        | std::views::transform([](int n) { return n * n; })
        | std::views::reverse;
    for (int n : processed) {
        std::cout << n << " ";
    }
    return 0;
}