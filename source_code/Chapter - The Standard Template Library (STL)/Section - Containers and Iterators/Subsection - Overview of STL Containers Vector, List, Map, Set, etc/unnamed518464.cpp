#include 
#include 
#include 
#include 
#include 

int main() {
    std::list lst;
    std::vector vec;
    std::mt19937 gen(std::random_device{}());
    
    // Measure list insertion
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000; ++i) {
        auto pos = lst.begin();
        std::advance(pos, std::uniform_int_distribution<>(0, lst.size())(gen));
        lst.insert(pos, i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "List time: " << std::chrono::duration_cast(end - start).count() << "ms\n";
    
    // Measure vector insertion
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000; ++i) {
        vec.insert(vec.begin() + std::uniform_int_distribution<>(0, vec.size())(gen), i);
    }
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Vector time: " << std::chrono::duration_cast(end - start).count() << "ms\n";
    
    return 0;
}