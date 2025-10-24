#include 
#include 

class ColorStream {
    // Your implementation here
};

int main() {
    ColorStream red_out(std::cout, "\033[31m");
    red_out << "Error: Invalid input!\n";
}