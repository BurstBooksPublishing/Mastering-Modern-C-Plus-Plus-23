#include 
#include 
#include 
#include 

std::string mock_network_request() {
    // Simulate network delay (0-3 seconds)
    std::this_thread::sleep_for(std::chrono::seconds(rand() % 4));
    return "Data received";
}

std::expected fetch_data_with_timeout() {
    // Your implementation here
}