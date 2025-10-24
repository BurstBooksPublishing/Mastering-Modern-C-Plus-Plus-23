#include 
#include 

void print_value(const std::optional& opt) {
    std::cout << *opt << std::endl; // Unsafe dereference
}

int main() {
    std::optional empty_opt;
    print_value(empty_opt);
}