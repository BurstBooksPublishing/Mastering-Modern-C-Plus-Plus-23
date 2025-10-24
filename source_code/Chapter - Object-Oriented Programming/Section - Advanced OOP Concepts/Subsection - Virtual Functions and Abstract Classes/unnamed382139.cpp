#include 
#include 

double total_area(const std::vector>& shapes) {
    double sum = 0.0;
    for (const auto& shape : shapes) {
        sum += shape->area();
    }
    return sum;
}