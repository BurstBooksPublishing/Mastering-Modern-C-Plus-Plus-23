#include 
#include 

void validate_input(int value) {
    if (value < 0) {
        throw std::invalid_argument("Input must be non-negative.");
    }
}

void process_data(int value) {
    try {
        validate_input(value);
    } catch (const std::invalid_argument& e) {
        throw std::runtime_error("Data processing failed: " + std::string(e.what()));
    }
}

int main() {
    try {
        process_data(-5);
    } catch (const std::runtime_error& e) {
        std::cerr << "Application error: " << e.what() << std::endl;
    }
    return 0;
}