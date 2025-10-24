#include 
#include 

int& getFirstElement(std::vector& vec) {
    return vec[0];
}

int main() {
    int& ref = getFirstElement(std::vector{1, 2, 3});
    std::cout << ref << std::endl; // Undefined behavior
    return 0;
}