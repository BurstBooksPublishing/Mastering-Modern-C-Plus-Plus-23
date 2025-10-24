#include 

int main() {
    int x = 5;
    auto square = [x]() { return x * x; };
    std::cout << square() << std::endl; // Expected output: 25
    return 0;
}