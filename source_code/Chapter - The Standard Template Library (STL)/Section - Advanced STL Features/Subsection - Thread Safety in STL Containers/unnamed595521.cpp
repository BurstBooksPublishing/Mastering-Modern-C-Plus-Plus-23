#include 
#include 
#include 

template 
class ThreadSafeAllocator {
public:
    using value_type = T;

    T* allocate(size_t n) {
        // Add thread safety here
        return static_cast(::operator new(n * sizeof(T)));
    }

    void deallocate(T* p, size_t n) {
        // Add thread safety here
        ::operator delete(p);
    }
};

int main() {
    std::list> thread_safe_list;
    return 0;
}