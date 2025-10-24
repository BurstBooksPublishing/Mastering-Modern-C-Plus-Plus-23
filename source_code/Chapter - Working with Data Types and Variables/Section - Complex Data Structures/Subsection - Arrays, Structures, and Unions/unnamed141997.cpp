#include 
#include 
#include 

struct Employee {
    std::string name;
    std::string department;
};

struct Team {
    std::unique_ptr leader;
    std::vector> members;
};

// Example initialization (details omitted for brevity)