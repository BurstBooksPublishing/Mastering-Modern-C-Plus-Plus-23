#include 
#include 
#include 
#include 
#include 
#include 

class ThreadSafeLogger {
public:
    void log(const std::string& message) {
        // Your implementation here
    }

    void stop() {
        // Your implementation here
    }

private:
    std::queue logQueue;
    std::mutex queueMutex;
    std::condition_variable cv;
    bool stopFlag = false;
    std::ofstream logFile{"market_log.txt"};
};