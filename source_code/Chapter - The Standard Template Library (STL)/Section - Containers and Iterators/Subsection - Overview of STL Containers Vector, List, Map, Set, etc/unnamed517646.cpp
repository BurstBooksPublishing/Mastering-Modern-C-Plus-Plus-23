#include 
#include 

int main() {
    std::vector vec = {1, 2, 3, 4, 5};
    auto it = vec.begin() + 2; // Iterator to middle element
    
    try {
        vec.resize(10); // Resize the vector
        std::cout << *it << std::endl; // Attempt to use invalidated iterator
    } catch (...) {
        std::cout << "Iterator invalidated after resize!" << std::endl;
    }
    return 0;
}