#include 
#include 
#include 

int main() {
    std::ifstream text_file("numbers.txt");
    if (!text_file) {
        std::cerr << "Failed to open text file.\n";
        return 1;
    }

    std::vector numbers;
    int num;
    while (text_file >> num) {
        numbers.push_back(num);
    }

    std::ofstream bin_file("numbers.bin", std::ios::binary);
    if (!bin_file) {
        std::cerr << "Failed to create binary file.\n";
        return 1;
    }
    bin_file.write(reinterpret_cast(numbers.data()), numbers.size() * sizeof(int));

    // Verification
    std::ifstream verify_bin("numbers.bin", std::ios::binary);
    std::vector loaded(numbers.size());
    verify_bin.read(reinterpret_cast(loaded.data()), loaded.size() * sizeof(int));

    for (int n : loaded) {
        std::cout << n << '\n';
    }
}