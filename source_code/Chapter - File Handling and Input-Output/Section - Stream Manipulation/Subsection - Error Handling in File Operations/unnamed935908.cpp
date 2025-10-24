#include 
#include 
#include 

int main() {
    std::string filename = "data.bin";
    std::ifstream file(filename, std::ios::binary);

    try {
        file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
        int value;
        while (file.read(reinterpret_cast(&value), sizeof(int))) {
            std::cout << "Read: " << value << '\n';
        }
    } catch (const std::ios_base::failure& e) {
        std::cerr << "File error: " << e.what() << '\n';
        if (!file.eof()) {
            std::cerr << "Possible corruption or incomplete data.\n";
        }
    }
}