class IntArray {
public:
    explicit IntArray(size_t size);
    ~IntArray();
    void resize(size_t newSize);
    int& operator[](size_t index);
private:
    int* data;
    size_t capacity;
};