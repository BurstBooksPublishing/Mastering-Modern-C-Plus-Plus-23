#include 

// Your inline function here

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::boolalpha << is_even(a) << " " 
              << is_even(b) << " " << is_even(c) << "\n";
}