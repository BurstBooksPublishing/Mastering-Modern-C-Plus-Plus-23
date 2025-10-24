#include 
#include 
#include 
#include 

int main() {
    std::vector> pairs = {
        {1, "Zebra"}, {2, "Apple"}, {3, "Banana"}
    };
    
    std::sort(pairs.begin(), pairs.end(),
        [](const auto& a, const auto& b) { return a.second < b.second; });
    
    for (const auto& p : pairs) {
        std::cout << p.first << ": " << p.second << "\n";
    }
    return 0;
}