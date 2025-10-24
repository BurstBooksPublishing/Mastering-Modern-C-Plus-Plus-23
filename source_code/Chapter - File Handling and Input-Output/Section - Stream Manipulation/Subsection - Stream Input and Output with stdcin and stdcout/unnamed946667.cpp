#include   
#include   

int main() {  
    double a, b, c;  

    std::cout << "Enter three floating-point numbers: ";  
    std::cin >> a >> b >> c;  

    std::cout << std::setw(15) << "Value"  
              << std::setw(15) << "Scientific"  
              << std::setw(15) << "Fixed" << '\n';  

    auto print_row = [](double x) {  
        std::cout << std::setw(15) << x  
                  << std::setw(15) << std::scientific << x  
                  << std::setw(15) << std::fixed << x << '\n';  
    };  

    print_row(a);  
    print_row(b);  
    print_row(c);  

    return 0;  
}