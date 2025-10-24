#include 
#include 
#include 
#include 

struct Stats {
    double min;
    double max;
    double average;
};

auto computeStatistics(const auto& container) -> Stats {
    if (container.empty()) return {0.0, 0.0, 0.0};
    
    auto min = *std::min_element(container.begin(), container.end());
    auto max = *std::max_element(container.begin(), container.end());
    auto sum = std::accumulate(container.begin(), container.end(), 0.0);
    
    return {
        static_cast(min),
        static_cast(max),
        sum / static_cast(container.size())
    };
}