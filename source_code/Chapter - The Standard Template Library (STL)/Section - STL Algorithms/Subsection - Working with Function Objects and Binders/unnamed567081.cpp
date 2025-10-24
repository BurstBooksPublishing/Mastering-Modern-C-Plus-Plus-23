#include 
#include 
#include 
#include 

int main() {
    std::vector values = {1.5, 2.3, 4.7, 3.2};
    double factor;
    std::cout << "Enter multiplication factor: ";
    std::cin >> factor;
    
    auto multiply = std::bind(std::multiplies{}, 
                             std::placeholders::_1, factor);
    std::transform(values.begin(), values.end(), 
                  values.begin(), multiply);
    
    for (double val : values) {
        std::cout << val << " ";
    }
    return 0;
}