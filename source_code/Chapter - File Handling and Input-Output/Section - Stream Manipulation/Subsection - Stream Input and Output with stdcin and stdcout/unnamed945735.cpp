#include   
#include   

int main() {  
    std::string first_name, last_name;  
    int age;  

    std::cout << "Enter your first name: ";  
    std::cin >> first_name;  
    std::cout << "Enter your last name: ";  
    std::cin >> last_name;  
    std::cout << "Enter your age: ";  
    std::cin >> age;  

    std::cout << "Name: " << last_name << ", " << first_name << '\n';  
    std::cout << "Age: " << std::setw(5) << age << '\n';  

    return 0;  
}