#include 
#include 
#include 
#include 

void retry_with_backoff(
    std::function operation,
    int max_retries,
    std::chrono::milliseconds initial_delay = 1000ms
);