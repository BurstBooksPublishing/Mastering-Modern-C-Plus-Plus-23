#include 
#include 

std::mutex mtx1, mtx2;

void thread_work() {
    std::lock_guard lock1(mtx1);
    std::lock_guard lock2(mtx2);
    // Critical section
}

int main() {
    std::thread t1(thread_work);
    std::thread t2(thread_work);
    t1.join();
    t2.join();
}