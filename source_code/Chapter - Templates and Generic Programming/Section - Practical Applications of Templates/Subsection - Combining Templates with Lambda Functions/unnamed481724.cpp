template 
constexpr auto apply_lambda(Lambda&& f, Args... args) {
    return std::forward(f)(args...);
}

// Example usage:
constexpr auto sum = apply_lambda(
    [](auto... xs) { return (xs + ...); }, 1, 2, 3, 4);
static_assert(sum == 10);