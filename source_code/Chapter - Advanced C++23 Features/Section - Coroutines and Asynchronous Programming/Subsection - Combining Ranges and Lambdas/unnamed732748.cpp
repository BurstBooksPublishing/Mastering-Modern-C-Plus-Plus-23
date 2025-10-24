#include 
#include 
#include 
#include 

int main() {
    std::vector readings = {5, -2, 10, -8, 3, 0, 7};
    auto processed = readings 
        | std::views::filter([](int x) { return x >= 0; })
        | std::views::transform([](int x) { return x * x; });
    
    for (int val : processed) {
        std::cout << val << " ";
    }
}