#include 
#include 

class FileHandle {
public:
    FileHandle(const std::string& filename) : file(filename) {
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file");
        }
    }

    ~FileHandle() {
        if (file.is_open()) {
            file.close();
        }
    }

    std::string readLine() {
        std::string line;
        std::getline(file, line);
        return line;
    }

private:
    std::ifstream file;
};