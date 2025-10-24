#include 
#include 

class EventDispatcher {
public:
    void subscribe(std::function callback) {
        subscribers.push_back(std::move(callback));
    }

    void fire_event(int value) {
        for (const auto& callback : subscribers) {
            callback(value);
        }
    }

private:
    std::vector> subscribers;
};