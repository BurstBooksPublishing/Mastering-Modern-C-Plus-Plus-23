#include 
#include 
#include 
#include 

int main() {
    std::vector numbers = {5, 12, 3, 15, 8, 20};
    auto isLessThan10 = std::bind(std::less{}, std::placeholders::_1, 10);
    numbers.erase(std::remove_if(numbers.begin(), numbers.end(), isLessThan10), 
                 numbers.end());
    
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}