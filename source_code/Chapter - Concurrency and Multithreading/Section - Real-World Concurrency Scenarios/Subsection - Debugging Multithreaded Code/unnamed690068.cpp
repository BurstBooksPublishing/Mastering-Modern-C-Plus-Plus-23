#include 
#include 
#include 

std::vector shared_data;

void worker(int id) {
    for (int i = 0; i < 100; ++i) {
        shared_data.push_back(id);
    }
}

int main() {
    std::thread t1(worker, 1);
    std::thread t2(worker, 2);
    t1.join();
    t2.join();
    
    for (int val : shared_data) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}