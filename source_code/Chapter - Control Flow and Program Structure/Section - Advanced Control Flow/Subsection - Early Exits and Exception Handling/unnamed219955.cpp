#include 
#include 

std::optional> divide_safe(int a, int b) {
    if (b == 0) return std::nullopt;
    return std::make_pair(a / b, a % b);
}