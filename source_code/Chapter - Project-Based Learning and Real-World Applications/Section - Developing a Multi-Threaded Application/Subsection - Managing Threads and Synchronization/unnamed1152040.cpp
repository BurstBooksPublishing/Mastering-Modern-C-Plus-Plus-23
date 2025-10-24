#include 
#include 
#include 
#include 

std::mutex mtx;
std::condition_variable cv;
int data = 0;
bool ready = false;

void producer() {
    for (int i = 1; i <= 10; ++i) {
        std::lock_guard lock(mtx);
        data = i;
        ready = true;
        cv.notify_one();
    }
}

void consumer() {
    for (int i = 1; i <= 10; ++i) {
        std::unique_lock lock(mtx);
        cv.wait(lock, []{ return ready; });
        std::cout << "Consumed: " << data << "\n";
        ready = false;
    }
}

int main() {
    std::jthread p(producer);
    std::jthread c(consumer);
    return 0;
}