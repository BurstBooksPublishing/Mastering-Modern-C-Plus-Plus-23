#include 
#include 
#include 
#include 

std::queue buffer;
std::mutex mtx;
std::condition_variable cv;
const int BUFFER_SIZE = 10;

void producer(int id) {
    for (int i = 0; i < 20; ++i) {
        std::unique_lock lock(mtx);
        cv.wait(lock, [] { return buffer.size() < BUFFER_SIZE; });
        buffer.push(i);
        cv.notify_one();
    }
}

void consumer(int id) {
    for (int i = 0; i < 20; ++i) {
        std::unique_lock lock(mtx);
        cv.wait(lock, [] { return !buffer.empty(); });
        buffer.pop();
        cv.notify_one();
    }
}

int main() {
    std::thread p1(producer, 1);
    std::thread p2(producer, 2);
    std::thread c1(consumer, 1);
    
    p1.join();
    p2.join();
    c1.join();
}