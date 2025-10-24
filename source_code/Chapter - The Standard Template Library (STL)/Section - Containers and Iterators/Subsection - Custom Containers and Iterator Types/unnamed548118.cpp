// Example usage:
std::vector vec = {1, 2, 3, 4, 5};
auto is_even = [](int x) { return x % 2 == 0; };
FilterIterator it(vec.begin(), vec.end(), is_even);
// *it should yield 2, then 4