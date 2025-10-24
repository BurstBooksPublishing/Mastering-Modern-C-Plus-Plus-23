#include 
#include 

class AsyncLogger {
public:
    AsyncLogger(const std::string& filename, ThreadPool& pool);
    void log(const std::string& message);
private:
    std::ofstream log_file;
    ThreadPool& pool;
    std::atomic is_open{false};
};