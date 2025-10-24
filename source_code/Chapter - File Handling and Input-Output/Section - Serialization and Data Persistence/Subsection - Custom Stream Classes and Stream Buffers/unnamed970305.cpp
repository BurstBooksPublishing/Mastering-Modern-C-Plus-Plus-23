#include 
#include 

int main() {
    ColorStream blue_out(std::cout, "\033[34m");
    blue_out << std::hex << std::setw(8) << std::setfill('0') 
             << 255 << "\n";
}