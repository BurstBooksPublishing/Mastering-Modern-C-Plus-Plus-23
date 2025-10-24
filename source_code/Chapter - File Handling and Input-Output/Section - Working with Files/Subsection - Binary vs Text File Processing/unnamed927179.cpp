#include 
#include 
#include 
#include 

bool is_binary(const std::filesystem::path& file) {
    std::ifstream f(file, std::ios::binary);
    if (!f) {
        throw std::runtime_error("Failed to open file.");
    }

    char byte;
    while (f.get(byte)) {
        if (!std::isprint(byte) && !std::isspace(byte) && byte != '\n' && byte != '\r') {
            return true;
        }
    }
    return false;
}

int main() {
    try {
        std::filesystem::path file = "test.bin";
        std::cout << (is_binary(file) ? "Binary" : "Text") << '\n';
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
}