#include 
#include 

template 
void sort_with_lambda(Container& c, Compare comp) {
    std::sort(c.begin(), c.end(), comp);
}