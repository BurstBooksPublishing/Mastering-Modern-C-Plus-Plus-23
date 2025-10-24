#include   
#include   

int main() {  
    auto fpVal = 3.14159;  
    auto charVal = 'A';  
    auto boolVal = true;  

    std::cout << "Type of fpVal: " << typeid(fpVal).name() << '\n';  
    std::cout << "Type of charVal: " << typeid(charVal).name() << '\n';  
    std::cout << "Type of boolVal: " << typeid(boolVal).name() << '\n';  
}