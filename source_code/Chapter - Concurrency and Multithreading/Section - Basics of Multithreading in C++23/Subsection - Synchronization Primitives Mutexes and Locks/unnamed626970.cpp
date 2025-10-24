#include 
#include 

std::mutex mtx;
bool do_lock = true;

void conditional_work() {
    if (do_lock) {
        mtx.lock();
    }
    // Critical section
    if (do_lock) {
        mtx.unlock();
    }
}

int main() {
    std::thread t1(conditional_work);
    std::thread t2(conditional_work);
    t1.join();
    t2.join();
}