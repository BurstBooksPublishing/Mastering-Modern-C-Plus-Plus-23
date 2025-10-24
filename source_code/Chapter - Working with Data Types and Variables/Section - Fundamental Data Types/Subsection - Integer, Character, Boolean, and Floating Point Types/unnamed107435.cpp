#include 

int main() {
    int a = 7, b = 2;
    auto int_div = a / b;
    auto float_div = static_cast(a) / b;
    
    std::cout << "Integer division: " << int_div << '\n';
    std::cout << "Floating-point division: " << float_div << '\n';
}