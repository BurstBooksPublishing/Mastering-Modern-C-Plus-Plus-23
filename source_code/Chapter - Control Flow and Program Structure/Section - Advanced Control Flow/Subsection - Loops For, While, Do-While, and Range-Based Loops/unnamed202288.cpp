#include 
#include 

int main() {
    std::vector numbers = {3, 8, 2, 5, 10, 7, 4};
    int sum = 0;
    for (int num : numbers) {
        if (num % 2 == 0) {
            sum += num;
        }
    }
    std::cout << "Sum of even numbers: " << sum << '\n';
}