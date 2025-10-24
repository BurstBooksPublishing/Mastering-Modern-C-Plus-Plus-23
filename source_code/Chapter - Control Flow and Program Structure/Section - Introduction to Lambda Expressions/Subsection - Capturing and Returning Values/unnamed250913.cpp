#include 

auto make_adder(int n) {
    return [n](int m) { return n + m; };
}

int main() {
    auto add_10 = make_adder(10);
    std::cout << add_10(5) << std::endl; // Expected output: 15
    return 0;
}