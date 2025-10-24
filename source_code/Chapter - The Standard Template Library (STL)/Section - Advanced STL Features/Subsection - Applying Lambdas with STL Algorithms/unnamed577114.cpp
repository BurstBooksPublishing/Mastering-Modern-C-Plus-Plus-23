#include 
#include 
#include 
#include 
#include 

int main() {
    std::vector words = {"hello", "world", "c++23"};
    
    std::transform(words.begin(), words.end(), words.begin(),
        [](std::string s) {
            for (char& c : s) { c = std::toupper(c); }
            return s;
        });
    
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    return 0;
}