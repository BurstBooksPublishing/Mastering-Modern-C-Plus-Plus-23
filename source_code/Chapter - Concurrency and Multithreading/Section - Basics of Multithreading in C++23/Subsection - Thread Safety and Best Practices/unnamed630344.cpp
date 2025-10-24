#include 
#include 

int counter = 0;

void increment_counter() {
    for (int i = 0; i < 1000; ++i) {
        ++counter;
    }
}