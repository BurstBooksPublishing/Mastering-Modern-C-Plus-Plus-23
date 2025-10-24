#include 
#include 
#include 

void countFrequencies(const std::vector& data) {
    std::unordered_map freqMap;
    for (int num : data) {
        freqMap[num]++;
    }
    // Additional processing or output
}