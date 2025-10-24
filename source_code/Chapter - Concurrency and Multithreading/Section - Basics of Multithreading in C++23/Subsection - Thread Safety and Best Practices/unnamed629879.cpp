#include 
#include 

std::vector shared_data;
std::mutex mtx;

void append_data(int value) {
    mtx.lock();
    shared_data.push_back(value);
    mtx.unlock();
}

int read_last() {
    return shared_data.back();
}