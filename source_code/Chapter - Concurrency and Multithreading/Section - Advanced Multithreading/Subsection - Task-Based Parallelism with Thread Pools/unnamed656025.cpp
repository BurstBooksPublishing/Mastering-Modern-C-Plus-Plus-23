#include 
#include 
#include 
#include 
#include 
#include 

class ThreadPool {
public:
    explicit ThreadPool(size_t num_threads);
    ~ThreadPool();
    void enqueue(std::function task);
private:
    std::vector workers;
    std::queue> tasks;
    std::mutex queue_mutex;
    std::condition_variable cv;
    bool stop = false;
};