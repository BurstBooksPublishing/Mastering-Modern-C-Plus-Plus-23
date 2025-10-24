#include 
#include 

void printPair(const std::pair& p) {
    std::cout << "First: " << p.first << ", Second: " << p.second << "\n";
}

int main() {
    std::pair values = {10, 20};
    printPair(values);
}