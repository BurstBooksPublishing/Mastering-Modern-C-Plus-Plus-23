#include 
#include 

void printPairs(const std::vector>& pairs) {
    for (size_t i = 0; i < pairs.size(); ++i) {
        std::cout << "{" << pairs[i].first << ", " << pairs[i].second << "}\n";
    }
}