#include 
#include 
#include 
#include 

struct Person {
    std::string name;
    int age;
};

int main() {
    std::vector people = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};
    
    std::sort(people.begin(), people.end(),
              [](const Person& a, const Person& b) { return a.age < b.age; });
              
    for (const auto& p : people) {
        std::cout << p.name << " (" << p.age << ")\n";
    }
    return 0;
}