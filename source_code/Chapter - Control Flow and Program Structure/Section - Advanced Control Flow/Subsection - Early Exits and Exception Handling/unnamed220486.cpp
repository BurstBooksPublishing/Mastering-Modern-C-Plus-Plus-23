#include 
#include 

class NegativeInputError : public std::exception {
public:
    const char* what() const noexcept override {
        return "Input to sqrt_checked must be non-negative";
    }
};

double sqrt_checked(double x) {
    if (x < 0) throw NegativeInputError{};
    return std::sqrt(x);
}