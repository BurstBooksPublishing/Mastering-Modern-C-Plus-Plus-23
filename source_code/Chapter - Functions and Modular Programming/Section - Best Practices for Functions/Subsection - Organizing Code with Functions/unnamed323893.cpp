#include 

std::vector globalData;

void processAndAppend(int value) {
    if (value > 0) {
        globalData.push_back(value * 2);
    }
}