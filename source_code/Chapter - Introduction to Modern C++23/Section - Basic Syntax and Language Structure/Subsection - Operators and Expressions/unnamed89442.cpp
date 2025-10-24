#include 

int main() {
    int value;
    std::cout << "Enter an integer: ";
    std::cin >> value;
    
    if (value & (1 << 2)) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
}