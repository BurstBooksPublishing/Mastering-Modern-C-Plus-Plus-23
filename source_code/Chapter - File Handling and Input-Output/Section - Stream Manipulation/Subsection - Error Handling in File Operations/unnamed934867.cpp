#include 
#include 
#include 

int main() {
    std::string filename;
    std::cout << "Enter filename: ";
    std::cin >> filename;

    if (!std::filesystem::exists(filename)) {
        std::cerr << "Error: File does not exist.\n";
    } else if (!std::filesystem::is_regular_file(filename)) {
        std::cerr << "Error: Not a regular file.\n";
    } else {
        std::ifstream file(filename);
        if (!file.is_open()) {
            std::cerr << "Error: Unable to open file (permission denied?).\n";
        } else {
            std::cout << "File opened successfully.\n";
            file.close();
        }
    }
}