#include   
#include   

int main() {  
    auto val1 = 42;  
    auto val2 = 1'000'000;  

    std::cout << "Type of val1: " << typeid(val1).name() << '\n';  
    std::cout << "Type of val2: " << typeid(val2).name() << '\n';  
}