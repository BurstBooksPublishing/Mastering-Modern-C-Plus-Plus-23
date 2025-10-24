class SafeArray {  
public:  
    SafeArray(size_t size);  
    ~SafeArray();  
    SafeArray& operator=(const SafeArray& other);  
    // Add other necessary methods (e.g., accessors)  
private:  
    int* data;  
    size_t size;  
};