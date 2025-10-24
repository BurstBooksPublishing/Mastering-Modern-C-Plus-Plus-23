#include 
#include 

struct Person {
    std::string name;
    int age;
    struct {
        std::string street;
        std::string city;
    } address;
};