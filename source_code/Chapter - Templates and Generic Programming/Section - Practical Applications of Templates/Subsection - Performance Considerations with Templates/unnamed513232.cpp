template
class Stack {
    std::vector data;
public:
    void push(const T& item) { data.push_back(item); }
    T pop() { T item = data.back(); data.pop_back(); return item; }
};