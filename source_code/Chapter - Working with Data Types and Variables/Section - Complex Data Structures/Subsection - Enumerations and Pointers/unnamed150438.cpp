#include 

union Data {
    int i;
    float f;
};

enum class DataType { Int, Float };

void printData(const Data* data, DataType type) {
    if (type == DataType::Int) {
        std::cout << "Integer: " << data->i << "\n";
    } else {
        std::cout << "Float: " << data->f << "\n";
    }
}

int main() {
    Data d;
    d.i = 42;
    printData(&d, DataType::Int);
    
    d.f = 3.14f;
    printData(&d, DataType::Float);
    
    return 0;
}