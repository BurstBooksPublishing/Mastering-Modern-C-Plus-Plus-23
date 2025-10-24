#include 
#include 
#include 

std::atomic shared_data{0};
std::atomic ready{false};

void producer() {
    shared_data.store(42, std::memory_order_relaxed);
    ready.store(true, std::memory_order_relaxed);
}

void consumer() {
    while (!ready.load(std::memory_order_relaxed)) {
        // Spin until ready
    }
    std::cout << "Consumed: " << shared_data.load(std::memory_order_relaxed) << std::endl;
}

int main() {
    std::thread prod(producer);
    std::thread cons(consumer);
    prod.join();
    cons.join();
}