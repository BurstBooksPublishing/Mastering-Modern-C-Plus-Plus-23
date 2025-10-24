#include 
#include 

void process_data(std::vector& data) {
    for (size_t i = 0; i < data.size(); ++i) {
        if (data[i] % 2 == 0) {
            data[i] *= 2;
        } else {
            data[i] += 1;
        }
    }
}