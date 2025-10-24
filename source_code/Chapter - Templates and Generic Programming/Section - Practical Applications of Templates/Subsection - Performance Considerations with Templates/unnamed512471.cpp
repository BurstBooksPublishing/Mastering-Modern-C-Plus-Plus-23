// Recursive template approach
template
struct Fibonacci {
    static constexpr int value = Fibonacci::value + Fibonacci::value;
};

template<>
struct Fibonacci<0> { static constexpr int value = 0; };

template<>
struct Fibonacci<1> { static constexpr int value = 1; };

// Constexpr function approach
constexpr int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n-1) + fibonacci(n-2);
}