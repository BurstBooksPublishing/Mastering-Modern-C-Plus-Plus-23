#include 
#include 

template 
std::array, N> transpose_matrix(
    const std::array, N>& matrix) {
    std::array, N> result;
    for (std::size_t i = 0; i < N; ++i) {
        for (std::size_t j = 0; j < N; ++j) {
            result[i][j] = matrix[j][i];
        }
    }
    return result;
}