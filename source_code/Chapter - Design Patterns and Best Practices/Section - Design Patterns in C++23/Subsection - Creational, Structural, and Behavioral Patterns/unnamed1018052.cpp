#include 
#include 
#include 

class Subject {
public:
    using Callback = std::function;

    void subscribe(Callback callback) {
        observers.push_back(std::move(callback));
    }

    void notify(const std::string& event) {
        for (const auto& observer : observers) {
            observer(event);
        }
    }

private:
    std::vector observers;
};