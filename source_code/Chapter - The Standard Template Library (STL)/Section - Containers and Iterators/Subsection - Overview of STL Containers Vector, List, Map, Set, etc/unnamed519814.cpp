#include 
#include 
#include 
#include 
#include 

int main() {
    std::map word_counts;
    std::string word;
    
    while (std::cin >> word) {
        ++word_counts[word];
    }
    
    // Copy to vector and sort by frequency
    std::vector> sorted(word_counts.begin(), word_counts.end());
    std::sort(sorted.begin(), sorted.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });
    
    // Print top 3
    for (auto it = sorted.begin(); it != sorted.end() && std::distance(sorted.begin(), it) < 3; ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }
    
    return 0;
}