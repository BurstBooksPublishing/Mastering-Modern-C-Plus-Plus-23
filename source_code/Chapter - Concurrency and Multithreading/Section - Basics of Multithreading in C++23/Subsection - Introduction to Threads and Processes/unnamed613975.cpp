#include 
#include 

void threadFunction1() {
    std::cout << "Hello from Thread 1" << std::endl;
}

void threadFunction2() {
    std::cout << "Hello from Thread 2" << std::endl;
}

int main() {
    std::thread t1(threadFunction1);
    std::thread t2(threadFunction2);

    t1.join();
    t2.join();

    return 0;
}