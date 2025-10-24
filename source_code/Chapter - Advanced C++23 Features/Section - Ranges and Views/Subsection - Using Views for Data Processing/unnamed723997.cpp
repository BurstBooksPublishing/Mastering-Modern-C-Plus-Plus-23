#include 
#include 
#include 

int main() {
    std::vector values = {5, 10, 15, 20, 25};
    auto processed = values 
                   | std::views::filter([](int n) { return n >= 10; })
                   | std::views::transform([](int n) { return n * n; });
    for (int result : processed) {
        std::cout << result << " ";
    }
    return 0;
}