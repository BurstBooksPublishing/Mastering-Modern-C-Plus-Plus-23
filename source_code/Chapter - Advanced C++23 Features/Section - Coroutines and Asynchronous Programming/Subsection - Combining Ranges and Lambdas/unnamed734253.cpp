#include 
#include 
#include 
#include 

int main() {
    auto hex_range = std::views::iota(1, 21)
        | std::views::filter([](int x) { return x % 2 == 0; })
        | std::views::transform([](int x) { 
            std::stringstream ss;
            ss << std::hex << x;
            return ss.str();
        });
    
    for (const auto& s : hex_range) {
        std::cout << s << " ";
    }
}