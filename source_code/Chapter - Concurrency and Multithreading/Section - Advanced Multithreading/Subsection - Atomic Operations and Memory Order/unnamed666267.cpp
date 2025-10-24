#include 
#include 
#include 
#include 

std::atomic counter{0};

void increment(int iterations) {
    for (int i = 0; i < iterations; ++i) {
        counter.fetch_add(1, std::memory_order_relaxed);
    }
}

int main() {
    constexpr int num_threads = 4;
    constexpr int iterations_per_thread = 100000;
    std::vector threads;
    
    for (int i = 0; i < num_threads; ++i) {
        threads.emplace_back(increment, iterations_per_thread);
    }
    
    for (auto& t : threads) {
        t.join();
    }
    
    std::cout << "Final counter value: " << counter << std::endl;
}