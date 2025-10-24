class StringVector {
    std::string* data;
    size_t size, capacity;
public:
    void push_back(const std::string& s); // Existing copy version
    void push_back(std::string&& s);      // Add move version
};