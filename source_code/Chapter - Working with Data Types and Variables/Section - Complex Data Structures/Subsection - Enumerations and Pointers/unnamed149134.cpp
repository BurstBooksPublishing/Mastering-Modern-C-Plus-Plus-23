#include 

enum class Color { Red, Green, Blue };

int main() {
    int rgb[] = {255, 128, 64};
    
    for (const auto& value : rgb) {
        std::cout << value << " ";
    }
    return 0;
}