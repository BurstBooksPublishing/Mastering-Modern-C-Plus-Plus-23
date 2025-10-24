void multiply_matrices(const int* a, const int* b, int* result, 
                       int rows, int cols, int inner) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < inner; ++k) {
                result[i * cols + j] += a[i * inner + k] * b[k * cols + j];
            }
        }
    }
}