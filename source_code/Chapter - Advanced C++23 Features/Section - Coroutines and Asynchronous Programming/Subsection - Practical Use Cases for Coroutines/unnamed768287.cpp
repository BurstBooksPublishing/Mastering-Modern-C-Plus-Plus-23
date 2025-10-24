#include 
#include 
#include 
#include 

struct task {
    // Your implementation here
};

task producer(std::queue& buffer, std::mutex& mtx);
task consumer(std::queue& buffer, std::mutex& mtx);