#include 

int main() {
    int threshold = 10;
    auto isAboveThreshold = [threshold](int x) { return x > threshold; };
    std::cout << std::boolalpha << isAboveThreshold(8) << '\n';
    std::cout << isAboveThreshold(12) << '\n';
}