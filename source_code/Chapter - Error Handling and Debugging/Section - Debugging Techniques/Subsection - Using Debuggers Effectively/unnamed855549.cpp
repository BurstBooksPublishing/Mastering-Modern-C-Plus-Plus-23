#include 

void processResource() {
    auto* ptr = new int(42); // Leaked
    // ... some operations ...
    // Missing delete
}

int main() {
    processResource();
    return 0;
}