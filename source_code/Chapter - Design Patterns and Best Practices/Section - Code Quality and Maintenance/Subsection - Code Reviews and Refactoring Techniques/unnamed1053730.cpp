#include 
#include 

std::string concatenate_strings(const std::vector& strings) {
    std::string result;
    for (auto it = strings.begin(); it != strings.end(); ++it) {
        result += *it;
    }
    return result;
}