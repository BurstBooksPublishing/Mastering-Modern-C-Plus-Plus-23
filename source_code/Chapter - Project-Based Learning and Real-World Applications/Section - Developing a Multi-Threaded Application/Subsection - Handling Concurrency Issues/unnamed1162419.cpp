#include 
#include 
#include 

std::queue data_queue;
std::mutex mtx;
std::condition_variable cv;

void producer(int value) {
    std::lock_guard lock(mtx);
    data_queue.push(value);
    cv.notify_one();
}

void consumer() {
    std::unique_lock lock(mtx);
    cv.wait(lock, []{ return !data_queue.empty(); });
    int value = data_queue.front();
    data_queue.pop();
}