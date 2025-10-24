template   
constexpr auto transform_values(const std::array& arr) {  
    // Your implementation here  
}  

constexpr auto square = [](int x) { return x * x; };  
constexpr std::array input{1, 2, 3};  
static_assert(transform_values(input)[0] == 1);