#include 
#include 

std::vector filterEvenNumbers(std::vector numbers) {
    numbers.erase(
        std::remove_if(numbers.begin(), numbers.end(),
                       [](int x) { return x % 2 != 0; }),
        numbers.end());
    return numbers;
}