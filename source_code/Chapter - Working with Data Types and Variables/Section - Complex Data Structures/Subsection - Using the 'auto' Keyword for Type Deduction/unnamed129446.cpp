#include   
#include   

int main() {  
    auto unsignedVal = 42U;  
    auto longVal = 100L;  
    auto floatVal = 2.5F;  

    std::cout << "Type of unsignedVal: " << typeid(unsignedVal).name() << '\n';  
    std::cout << "Type of longVal: " << typeid(longVal).name() << '\n';  
    std::cout << "Type of floatVal: " << typeid(floatVal).name() << '\n';  
}