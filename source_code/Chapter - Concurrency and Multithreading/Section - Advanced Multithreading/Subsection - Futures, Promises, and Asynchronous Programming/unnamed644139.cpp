#include 
#include 

unsigned long long factorial(unsigned int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    auto fut = std::async(std::launch::async, factorial, 10);
    std::cout << "10! = " << fut.get() << std::endl;
}