#include 
#include 
#include 
#include 
#include 

int main() {
    std::vector words = {"hello", "world", "c++", "stl"};
    
    std::transform(words.begin(), words.end(), words.begin(),
                   [](std::string s) {
                       std::transform(s.begin(), s.end(), s.begin(),
                                     [](unsigned char c) { return std::toupper(c); });
                       return s;
                   });
                   
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    return 0;
}