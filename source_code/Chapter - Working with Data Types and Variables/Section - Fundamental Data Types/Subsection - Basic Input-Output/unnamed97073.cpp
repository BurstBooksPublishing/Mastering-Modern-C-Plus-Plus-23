#include 
#include 
#include 

int main() {
    std::string filename;
    std::cout << "Enter filename: ";
    std::cin >> filename;
    
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file.\n";
        return 1;
    }
    
    char ch;
    int count = 0;
    while (file.get(ch)) {
        if (std::isalpha(ch)) ++count;
    }
    
    std::cout << "Total alphabetic characters: " << count << '\n';
}