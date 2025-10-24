#include 
#include 
#include 

class FileOpenException : public std::runtime_error {
public:
    FileOpenException(const std::string& message) 
        : std::runtime_error(message) {}
};

void read_file(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw FileOpenException("Failed to open file: " + filename);
    }
    // File processing logic (omitted for brevity)
}

int main() {
    try {
        read_file("nonexistent.txt");
    } catch (const FileOpenException& e) {
        std::cerr << "File error: " << e.what() << std::endl;
    }
    return 0;
}