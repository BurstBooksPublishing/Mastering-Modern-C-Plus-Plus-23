#include 

int main() {
    double temperature;
    while (std::cin >> temperature && temperature <= 100.0) {
        std::cout << "Temperature within safe limits.\n";
    }
    std::cout << "Warning: Temperature exceeded 100.0°C!\n";
}