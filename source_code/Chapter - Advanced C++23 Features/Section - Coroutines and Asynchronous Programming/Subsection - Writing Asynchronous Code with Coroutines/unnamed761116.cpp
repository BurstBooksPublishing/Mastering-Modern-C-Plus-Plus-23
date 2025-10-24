#include 
#include 

struct Task {
    struct promise_type {
        int current_value;
        
        Task get_return_object() { return Task{std::coroutine_handle::from_promise(*this)}; }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always yield_value(int value) { current_value = value; return {}; }
        std::suspend_never final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
    };

    std::coroutine_handle handle;
    
    bool resume() { 
        if (!handle.done()) handle.resume();
        return !handle.done();
    }
};

Task counter() {
    co_yield 1;
    co_yield 2;
    co_yield 3;
}

int main() {
    Task t = counter();
    while (t.resume()) {
        std::cout << t.handle.promise().current_value << "\n";
    }
}