#include 
#include 
#include 

int main() {
    namespace fs = std::filesystem;
    try {
        fs::path text_file = "data.txt";
        fs::path bin_file = "data.bin";
        
        std::cout << "Text file size: " << fs::file_size(text_file) << " bytes\n";
        std::cout << "Binary file size: " << fs::file_size(bin_file) << " bytes\n";
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
}