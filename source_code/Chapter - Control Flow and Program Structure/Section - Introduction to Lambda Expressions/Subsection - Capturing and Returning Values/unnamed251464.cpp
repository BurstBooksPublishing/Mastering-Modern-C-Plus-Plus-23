#include 

int main() {
    int counter = 0;
    auto increment = [&counter]() { ++counter; };
    increment();
    increment();
    std::cout << counter << std::endl; // Expected output: 2
    return 0;
}