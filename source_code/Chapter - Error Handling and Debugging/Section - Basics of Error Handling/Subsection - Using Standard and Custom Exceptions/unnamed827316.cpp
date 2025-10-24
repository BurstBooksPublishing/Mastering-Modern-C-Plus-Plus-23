#include 
#include 
#include 

class InvalidDataError : public std::exception {
public:
    const char* what() const noexcept override {
        return "Data must be a positive integer.";
    }
};

void process_file(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file.");
    }
    
    int value;
    file >> value;
    if (value <= 0 || file.fail()) {
        throw InvalidDataError();
    }
    std::cout << "Valid value: " << value << '\n';
}

int main() {
    try {
        process_file("data.txt");
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
}