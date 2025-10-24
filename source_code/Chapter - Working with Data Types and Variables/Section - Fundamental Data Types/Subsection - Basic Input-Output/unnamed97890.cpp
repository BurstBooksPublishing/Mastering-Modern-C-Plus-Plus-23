#include 
#include 

int main() {
    int a, b, c;
    
    while (true) {
        std::cout << "Enter three integers (separated by spaces): ";
        if (std::cin >> a >> b >> c) {
            break;
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits::max(), '\n');
        std::cerr << "Invalid input. Try again.\n";
    }
    
    std::cout << "Sum: " << (a + b + c) << '\n';
}