#include 
#include 
#include 

int main() {
    double principal, rate, time;
    std::cout << "Enter principal amount: ";
    std::cin >> principal;
    std::cout << "Enter annual interest rate (as decimal): ";
    std::cin >> rate;
    std::cout << "Enter time in years: ";
    std::cin >> time;
    
    double amount = principal * std::pow(1 + rate / 4, 4 * time);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Compound amount: " << amount << '\n';
}