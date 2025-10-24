#include 
#include 
#include 
#include 

class LogNotifier {
public:
    using Subscriber = std::function;

    void subscribe(Subscriber sub) {
        subscribers_.push_back(std::move(sub));
    }

    void notify(const std::string& message) {
        for (const auto& sub : subscribers_) {
            sub(message);
        }
    }

private:
    std::vector subscribers_;
};

// Usage:
// LogNotifier notifier;
// notifier.subscribe([](const std::string& msg) { /* File logging */ });
// notifier.subscribe([](const std::string& msg) { /* Console output */ });
// notifier.notify("Test message");