#include 

class Singleton {
public:
    static Singleton& instance() {
        static Singleton inst;
        return inst;
    }

    std::string_view get_config() const {
        return "Default Config";
    }

private:
    Singleton() = default;
    ~Singleton() = default;
};