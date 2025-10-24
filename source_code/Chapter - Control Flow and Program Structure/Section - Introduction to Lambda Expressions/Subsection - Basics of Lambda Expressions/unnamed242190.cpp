#include 
#include 
#include 

int main() {
    std::vector numbers = {1, 2, 3, 4, 5};
    numbers.erase(std::remove_if(numbers.begin(), numbers.end(),
        [](int x) { return x % 2 != 0; }), numbers.end());
    
    for (int n : numbers) {
        std::cout << n << ' ';
    }
}