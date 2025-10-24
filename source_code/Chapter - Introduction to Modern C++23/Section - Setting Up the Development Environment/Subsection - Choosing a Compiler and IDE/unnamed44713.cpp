#include 
#include 

int divide(int a, int b) {
    if (b == 0) {
        std::cout << std::stacktrace::current() << '\n';
        return 0;
    }
    return a / b;
}

int main() {
    divide(10, 0);
}