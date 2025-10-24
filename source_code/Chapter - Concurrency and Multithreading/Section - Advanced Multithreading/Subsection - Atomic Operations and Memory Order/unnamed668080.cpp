#include 
#include 
#include 
#include 

std::atomic_flag lock = ATOMIC_FLAG_INIT;
int shared_counter = 0;

void increment_counter(int iterations) {
    for (int i = 0; i < iterations; ++i) {
        while (lock.test_and_set(std::memory_order_seq_cst)) {
            // Spin until lock is acquired
        }
        ++shared_counter;
        lock.clear(std::memory_order_seq_cst);
    }
}

int main() {
    constexpr int num_threads = 4;
    constexpr int iterations_per_thread = 10000;
    std::vector threads;
    
    for (int i = 0; i < num_threads; ++i) {
        threads.emplace_back(increment_counter, iterations_per_thread);
    }
    
    for (auto& t : threads) {
        t.join();
    }
    
    std::cout << "Final counter value: " << shared_counter << std::endl;
}