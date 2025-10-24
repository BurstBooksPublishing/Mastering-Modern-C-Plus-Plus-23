#include   
#include   

int main() {  
    int num, sum = 0;  

    std::cout << "Enter integers (0 to stop): ";  
    while (std::cin >> num) {  
        if (num == 0) break;  
        sum += num;  
    }  

    if (!std::cin) {  
        std::cin.clear();  
        std::cin.ignore(std::numeric_limits::max(), '\n');  
    }  

    std::cout << "Sum: " << sum << '\n';  

    return 0;  
}