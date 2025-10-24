class Buffer {
    int* data;
    size_t size;
public:
    Buffer(size_t size) : data(new int[size]), size(size) {}
    ~Buffer() { delete[] data; }
};