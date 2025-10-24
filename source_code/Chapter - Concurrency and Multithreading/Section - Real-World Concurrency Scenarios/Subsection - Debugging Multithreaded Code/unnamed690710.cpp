#include 
#include 
#include 
#include 

std::queue> tasks;
std::mutex mtx;
std::condition_variable cv;

void worker() {
    while (true) {
        std::unique_lock lock(mtx);
        cv.wait(lock, [] { return !tasks.empty(); });
        auto task = tasks.front();
        tasks.pop();
        task();
    }
}

int main() {
    std::thread t1(worker);
    std::thread t2(worker);
    
    {
        std::lock_guard lock(mtx);
        tasks.push([] { std::cout << "Task 1\n"; });
        tasks.push([] { std::cout << "Task 2\n"; });
    }
    cv.notify_all();
    
    t1.join();
    t2.join();
}