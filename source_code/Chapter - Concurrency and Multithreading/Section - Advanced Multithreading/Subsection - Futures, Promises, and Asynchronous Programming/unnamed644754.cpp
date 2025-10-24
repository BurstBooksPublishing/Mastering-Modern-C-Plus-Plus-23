#include 
#include 

int main() {
    std::promise prom;
    std::future fut = prom.get_future();
    
    auto continuation = fut.then([](std::future f) {
        return f.get() + 10;
    });
    
    std::thread t([&prom] { prom.set_value(5); });
    
    std::cout << "Final value: " << continuation.get() << std::endl;
    t.join();
}