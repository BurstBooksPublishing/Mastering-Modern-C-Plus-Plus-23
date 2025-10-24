#include 
#include 
#include 

struct Generator {
    struct promise_type {
        std::string value;
        
        Generator get_return_object() { return Generator{std::coroutine_handle::from_promise(*this)}; }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always yield_value(std::string val) { value = val; return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
    };

    std::coroutine_handle handle;
    
    std::string next() {
        handle.resume();
        return handle.promise().value;
    }
};

Generator produceStrings() {
    co_yield "Hello";
    co_yield "from";
    co_yield "coroutines!";
}

struct Consumer {
    struct promise_type {
        Generator gen;
        
        Consumer get_return_object() { return Consumer{std::coroutine_handle::from_promise(*this)}; }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_never final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
        
        auto await_transform(Generator g) {
            gen = g;
            return std::suspend_always{};
        }
    };

    std::coroutine_handle handle;
    
    void consume() {
        handle.resume();
    }
};

Consumer consumeStrings() {
    Generator gen = produceStrings();
    co_await gen;
    
    std::cout << gen.next() << " ";
    std::cout << gen.next() << " ";
    std::cout << gen.next() << "\n";
}

int main() {
    Consumer consumer = consumeStrings();
    consumer.consume();
}