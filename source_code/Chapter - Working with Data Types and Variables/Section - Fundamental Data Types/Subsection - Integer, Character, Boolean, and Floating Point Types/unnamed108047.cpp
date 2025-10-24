#include 

int main() {
    char lowercase = 'g';
    char uppercase = lowercase - ('a' - 'A');
    auto is_uppercase = (uppercase >= 'A' && uppercase <= 'Z');
    
    std::cout << "Uppercase: " << uppercase << '\n';
    std::cout << "Is uppercase? " << std::boolalpha << is_uppercase << '\n';
}