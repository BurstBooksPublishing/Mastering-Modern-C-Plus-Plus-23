std::variant value = "hello";
// Unsafe extraction (fix this):
std::cout << std::get(value) << "\n";