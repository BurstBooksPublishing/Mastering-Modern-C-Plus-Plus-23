template 
auto multiply(T a, U b) -> decltype(a * b) {
    return a * b;
}