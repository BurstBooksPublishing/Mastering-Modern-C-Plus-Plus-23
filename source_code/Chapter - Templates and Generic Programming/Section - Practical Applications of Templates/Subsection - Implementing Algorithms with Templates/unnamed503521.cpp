template 
constexpr int fibonacci() {
    static_assert(N <= 20, "N must be <= 20");
    if constexpr (N <= 1) {
        return N;
    } else {
        return fibonacci() + fibonacci();
    }
}