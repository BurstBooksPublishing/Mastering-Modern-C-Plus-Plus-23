#include 
#include 
#include 

template 
auto filter_if(const Container& c, auto predicate) {
    Container result;
    std::ranges::copy_if(c, std::back_inserter(result), predicate);
    return result;
}