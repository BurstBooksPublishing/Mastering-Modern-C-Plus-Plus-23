#include 
#include 

int main() {
    std::jthread t1([]{
        std::cout << "Thread ID: " << std::this_thread::get_id() 
                  << " - Thread 1 working\n";
    });
    std::jthread t2([]{
        std::cout << "Thread ID: " << std::this_thread::get_id() 
                  << " - Thread 2 working\n";
    });
    std::jthread t3([]{
        std::cout << "Thread ID: " << std::this_thread::get_id() 
                  << " - Thread 3 working\n";
    });
    return 0;
}