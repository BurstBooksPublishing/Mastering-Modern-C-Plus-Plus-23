#include 
#include 
#include 

int counter = 0;
std::mutex mtx;

void increment() {
    for (int i = 0; i < 1000; ++i) {
        std::lock_guard lock(mtx);
        ++counter;
    }
}

int main() {
    std::jthread t1(increment);
    std::jthread t2(increment);
    std::jthread t3(increment);
    std::jthread t4(increment);
    
    t1.join(); t2.join(); t3.join(); t4.join();
    std::cout << "Final counter: " << counter << "\n";
    return 0;
}