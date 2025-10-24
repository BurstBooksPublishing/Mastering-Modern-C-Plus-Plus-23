#include 
#include 

void process_data(std::vector& data) {
    std::sort(data.begin(), data.end());
    for (auto& x : data) {
        x *= 2;
    }
}

int main() {
    std::vector data(1000000, 42);
    process_data(data);
    return 0;
}