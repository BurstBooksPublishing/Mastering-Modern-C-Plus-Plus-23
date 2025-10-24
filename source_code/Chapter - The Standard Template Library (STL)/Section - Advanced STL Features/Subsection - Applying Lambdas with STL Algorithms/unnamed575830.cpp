#include 
#include 
#include 

int main() {
    std::vector numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector odd_numbers;
    
    std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(odd_numbers),
        [](int x) { return x % 2 != 0; });
    
    for (int num : odd_numbers) {
        std::cout << num << " ";
    }
    return 0;
}