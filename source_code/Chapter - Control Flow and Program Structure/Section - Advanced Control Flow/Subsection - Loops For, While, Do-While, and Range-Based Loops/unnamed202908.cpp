#include 

int main() {
    int choice;
    const int a = 5, b = 3;
    do {
        std::cout << "Menu:\n1. Add\n2. Subtract\n3. Exit\nChoice: ";
        std::cin >> choice;
        switch (choice) {
            case 1: std::cout << "Result: " << a + b << '\n'; break;
            case 2: std::cout << "Result: " << a - b << '\n'; break;
            case 3: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid choice!\n";
        }
    } while (choice != 3);
}