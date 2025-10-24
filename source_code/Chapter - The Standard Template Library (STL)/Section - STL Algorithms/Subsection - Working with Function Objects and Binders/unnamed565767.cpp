#include 
#include 
#include 
#include 

struct ComparePairs {
    bool operator()(const std::pair& a, 
                    const std::pair& b) const {
        return a.first > b.first;
    }
};

int main() {
    std::vector> data = {
        {5, "apple"}, {2, "banana"}, {8, "cherry"}, {1, "date"}
    };
    std::sort(data.begin(), data.end(), ComparePairs{});
    return 0;
}