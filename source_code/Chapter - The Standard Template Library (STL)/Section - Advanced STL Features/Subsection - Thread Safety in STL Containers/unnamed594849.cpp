#include 
#include 
#include 

std::map shared_map;
std::mutex map_mutex;

void insert_to_map(int key, const std::string& value) {
    // Fix the race condition here
    shared_map[key] = value;
}

int main() {
    std::thread t1(insert_to_map, 1, "Thread 1");
    std::thread t2(insert_to_map, 2, "Thread 2");
    t1.join();
    t2.join();
    return 0;
}