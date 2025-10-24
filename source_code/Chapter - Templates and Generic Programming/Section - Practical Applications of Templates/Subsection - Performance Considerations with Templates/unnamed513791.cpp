template
T dot_product(const T (&a)[N], const T (&b)[N]) {
    T result = 0;
    for (size_t i = 0; i < N; ++i) {
        result += a[i] * b[i];
    }
    return result;
}