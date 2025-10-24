#include 
#include 

void display_help() {
    std::cout << std::format(
        "Usage: tool [OPTIONS]\n"
        "Options:\n"
        "  --input     Specify input file\n"
        "  --output    Specify output file\n"
        "  --help, -h        Show this message\n"
    );
}