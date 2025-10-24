#include 
#include 

int main() {
    int data[2][3] = {{1, 2, 3}, {4, 5, 6}};
    std::mdspan mat{data};
    
    for (size_t i = 0; i < mat.extent(0); ++i) {
        for (size_t j = 0; j < mat.extent(1); ++j) {
            std::cout << mat[i, j] << " ";
        }
        std::cout << "\n";
    }
}