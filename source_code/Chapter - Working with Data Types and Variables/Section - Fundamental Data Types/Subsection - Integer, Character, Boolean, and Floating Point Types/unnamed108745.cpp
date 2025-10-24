#include 
#include 

int main() {
    float f = 3.1415926535f;
    double d = 3.1415926535;
    long double ld = 3.1415926535L;
    
    std::cout << std::setprecision(10);
    std::cout << "float: " << f << '\n';
    std::cout << "double: " << d << '\n';
    std::cout << "long double: " << ld << '\n';
}