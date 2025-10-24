#include 
#include 

class FilterBuffer : public std::streambuf {
    // Your implementation here
};

class FilteredStream : public std::ostream {
    // Your implementation here
};

int main() {
    FilteredStream fs(std::cout);
    fs << "Hello, World! This is a test.\n";
}