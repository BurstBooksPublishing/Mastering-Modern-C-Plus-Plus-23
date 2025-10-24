#include 
#include 

template 
class CircularBuffer {
    std::array buffer;
    size_t head = 0, tail = 0, count = 0;
public:
    void push(T item) {
        buffer[tail] = item;
        tail = (tail + 1) % N;
        if (count < N) ++count;
        else head = (head + 1) % N;
    }
    T& front() { 
        if (count == 0) throw std::runtime_error("Buffer empty");
        return buffer[head];
    }
};