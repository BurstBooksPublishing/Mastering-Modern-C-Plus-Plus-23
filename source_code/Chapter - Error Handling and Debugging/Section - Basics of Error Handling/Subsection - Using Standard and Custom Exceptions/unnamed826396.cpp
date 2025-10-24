#include 
#include 
#include 

class NegativeValueError : public std::exception {
public:
    const char* what() const noexcept override {
        return "Input value cannot be negative.";
    }
};

double sqrt_checked(double x) {
    if (x < 0) {
        throw NegativeValueError();
    }
    return std::sqrt(x);
}

int main() {
    try {
        std::cout << sqrt_checked(4.0) << '\n';
        std::cout << sqrt_checked(-1.0) << '\n';
    } catch (const NegativeValueError& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
}