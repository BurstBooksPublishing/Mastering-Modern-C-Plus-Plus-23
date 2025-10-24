#include 
#include 

int divide_numbers(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero.");
    }
    return numerator / denominator;
}

int main() {
    try {
        std::cout << divide_numbers(10, 0) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}