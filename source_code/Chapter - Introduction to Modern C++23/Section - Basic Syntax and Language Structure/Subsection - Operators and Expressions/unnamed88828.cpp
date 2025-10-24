#include 
#include 

int main() {
    double fahrenheit;
    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> fahrenheit;
    
    double celsius = (5.0 / 9.0) * (fahrenheit - 32);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Temperature in Celsius: " << celsius << '\n';
}