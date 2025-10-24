#include 
#include 
#include 

void log_message(const std::string& msg) {
    std::cout << msg << std::endl; // Unsafe concurrent access
}

void worker(int id) {
    log_message("Thread " + std::to_string(id) + " started");
}

int main() {
    std::vector threads;
    for (int i = 0; i < 5; ++i) {
        threads.emplace_back(worker, i);
    }
    for (auto& t : threads) {
        t.join();
    }
}