#include 
#include 

template 
struct DebugAllocator {
    using value_type = T;

    T* allocate(size_t n) {
        return static_cast(::operator new(n * sizeof(T)));
    }

    void deallocate(T* p, size_t n) {
        ::operator delete(p);
    }
};

int main() {
    std::vector> vec;
    vec.push_back(42);
}