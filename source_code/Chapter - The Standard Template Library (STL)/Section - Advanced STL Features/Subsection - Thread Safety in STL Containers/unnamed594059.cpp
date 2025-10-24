#include 
#include 
#include 

template 
class ThreadSafeVector {
public:
    void push_back(const T& value) {
        std::lock_guard lock(mtx);
        data.push_back(value);
    }

    void pop_back() {
        std::lock_guard lock(mtx);
        if (!data.empty()) {
            data.pop_back();
        }
    }

    size_t size() const {
        std::lock_guard lock(mtx);
        return data.size();
    }

private:
    std::vector data;
    mutable std::mutex mtx;
};