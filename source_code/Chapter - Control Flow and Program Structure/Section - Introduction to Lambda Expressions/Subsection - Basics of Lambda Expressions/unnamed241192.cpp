#include 

int main() {
    auto multiply = [](int a, int b) { return a * b; };
    std::cout << multiply(5, 7) << '\n';
}