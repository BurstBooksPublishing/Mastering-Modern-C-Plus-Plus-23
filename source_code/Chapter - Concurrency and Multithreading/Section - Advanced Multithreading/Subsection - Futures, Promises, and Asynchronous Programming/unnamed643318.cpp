#include 
#include 
#include 

void producer(std::promise&& prom, int a, int b) {
    try {
        prom.set_value(a + b);
    } catch (...) {
        prom.set_exception(std::current_exception());
    }
}

int main() {
    std::promise prom;
    std::future fut = prom.get_future();
    
    std::thread t(producer, std::move(prom), 5, 3);
    
    std::cout << "Result: " << fut.get() << std::endl;
    t.join();
}