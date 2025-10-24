#include 
#include 
#include 

void fillVector(std::vector& vec, size_t count) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);
    for (size_t i = 0; i < count; ++i) {
        vec.push_back(dist(gen));
    }
}

int main() {
    std::vector data;
    fillVector(data, 1'000'000);
}