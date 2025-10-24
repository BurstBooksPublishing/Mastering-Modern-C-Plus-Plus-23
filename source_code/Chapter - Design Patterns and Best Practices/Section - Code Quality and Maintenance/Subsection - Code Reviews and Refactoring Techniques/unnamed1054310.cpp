#include 
#include 

std::string get_value(const std::map& m, int key) {
    auto it = m.find(key);
    if (it != m.end()) {
        return it->second;
    }
    return "";
}