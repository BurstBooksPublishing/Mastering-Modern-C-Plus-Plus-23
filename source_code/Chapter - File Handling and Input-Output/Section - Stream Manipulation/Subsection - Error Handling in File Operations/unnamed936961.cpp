#include 
#include 
#include 
#include 

bool copyFile(const std::filesystem::path& src, const std::filesystem::path& dst) {
    std::error_code ec;
    if (!std::filesystem::exists(src, ec)) {
        std::cerr << "Error: Source file does not exist.\n";
        return false;
    }
    
    std::ifstream in(src, std::ios::binary);
    std::ofstream out(dst, std::ios::binary);
    
    if (!in || !out) {
        std::cerr << "Error: Unable to open files for copying.\n";
        return false;
    }
    
    out << in.rdbuf();
    return !in.fail() && !out.fail();
}

int main() {
    std::filesystem::path src = "source.txt";
    std::filesystem::path dst = "destination.txt";
    
    if (!copyFile(src, dst)) {
        std::cerr << "First attempt failed. Retrying...\n";
        if (!copyFile(src, dst)) {
            std::cerr << "Error: Copy failed after retry.\n";
            return 1;
        }
    }
    std::cout << "File copied successfully.\n";
}