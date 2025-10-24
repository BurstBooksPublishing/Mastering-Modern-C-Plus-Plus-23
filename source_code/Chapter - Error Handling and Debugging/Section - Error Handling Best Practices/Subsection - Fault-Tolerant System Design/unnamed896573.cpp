#include 
#include 
#include 

class SystemStateError : public std::runtime_error {
    using std::runtime_error::runtime_error;
};

void validate_system_state(
    const std::vector& required_files,
    bool check_network = false
);