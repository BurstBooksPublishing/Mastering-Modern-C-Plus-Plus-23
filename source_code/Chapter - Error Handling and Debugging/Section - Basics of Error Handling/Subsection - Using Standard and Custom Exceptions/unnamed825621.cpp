#include 
#include 

double divide_safe(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero.");
    }
    return static_cast(numerator) / denominator;
}

int main() {
    try {
        std::cout << divide_safe(10, 2) << '\n';
        std::cout << divide_safe(5, 0) << '\n';
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
}