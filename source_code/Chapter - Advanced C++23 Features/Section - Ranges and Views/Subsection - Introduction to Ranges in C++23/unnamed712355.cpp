#include 
#include 
#include 

int main() {
    std::vector numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto even_numbers = numbers | std::views::filter([](int n) { return n % 2 == 0; });
    for (int n : even_numbers) {
        std::cout << n << " ";
    }
    return 0;
}