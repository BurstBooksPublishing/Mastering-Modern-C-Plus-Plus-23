#include 
#include 

class Singleton {
public:
    static Singleton& getInstance() {
        std::call_once(initFlag, []() { instance = new Singleton(); });
        return *instance;
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    Singleton() = default;
    ~Singleton() = default;

    static std::once_flag initFlag;
    static Singleton* instance;
};

std::once_flag Singleton::initFlag;
Singleton* Singleton::instance = nullptr;