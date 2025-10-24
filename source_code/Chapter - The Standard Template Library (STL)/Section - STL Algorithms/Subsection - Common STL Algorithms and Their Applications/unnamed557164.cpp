#include 
#include 
#include 

int main() {
    std::vector data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector evens;
    
    std::copy_if(data.begin(), data.end(), std::back_inserter(evens),
                 [](int x) { return x % 2 == 0; });
                 
    for (int num : evens) {
        std::cout << num << " ";
    }
    return 0;
}