#include 
#include 

class InstrumentCache {
public:
    double getPrice(const std::string& instrumentId) {
        // Your debugging and fixes here
        return cache_[instrumentId];
    }

    void updatePrice(const std::string& instrumentId, double price) {
        // Your debugging and fixes here
        cache_[instrumentId] = price;
    }

private:
    std::unordered_map cache_;
};