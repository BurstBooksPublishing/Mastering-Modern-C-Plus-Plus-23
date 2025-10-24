#include 
#include 
#include 
#include 
#include 

int main() {
    std::vector products = {"box", "hammer", "nails", "tape", "glue"};
    auto processed = products
        | std::views::filter([](const auto& s) { return s.size() > 3; })
        | std::views::transform([](const auto& s) { 
            std::string upper;
            for (char c : s) upper += toupper(c);
            return upper;
        })
        | std::views::reverse;
    
    for (const auto& s : processed) {
        std::cout << s << " ";
    }
}