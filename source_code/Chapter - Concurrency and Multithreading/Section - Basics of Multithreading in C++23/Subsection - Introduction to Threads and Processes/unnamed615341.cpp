#include 
#include 
#include 
#include 

class Singleton {
private:
    static std::unique_ptr instance;
    static std::once_flag initFlag;

    Singleton() = default;

public:
    static Singleton& getInstance() {
        std::call_once(initFlag, []() {
            instance.reset(new Singleton());
        });
        return *instance;
    }

    void printMessage() {
        std::cout << "Singleton instance created" << std::endl;
    }
};

std::unique_ptr Singleton::instance;
std::once_flag Singleton::initFlag;

int main() {
    Singleton::getInstance().printMessage();
    return 0;
}