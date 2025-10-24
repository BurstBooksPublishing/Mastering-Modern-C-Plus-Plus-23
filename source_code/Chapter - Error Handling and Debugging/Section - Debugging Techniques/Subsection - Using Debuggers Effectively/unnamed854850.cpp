#include 
#include 

void processData(std::vector& data) {
    for (size_t i = 0; i < data.size(); ++i) {
        if (i % 2 == 0) {
            data[i] *= 2; // Intended: Only modify even indices
        } else {
            data[i] -= 1; // Bug: Should be data[i] += 1
        }
    }
}

int main() {
    std::vector values = {1, 2, 3, 4, 5, 6, 7, 8};
    processData(values);
    return 0;
}