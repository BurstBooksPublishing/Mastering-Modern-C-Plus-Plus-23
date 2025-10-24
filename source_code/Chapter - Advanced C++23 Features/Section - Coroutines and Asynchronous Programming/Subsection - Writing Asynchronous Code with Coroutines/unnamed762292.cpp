#include 
#include 
#include 

struct AsyncTask {
    struct promise_type {
        std::future fut;
        int result;
        
        AsyncTask get_return_object() { return AsyncTask{std::coroutine_handle::from_promise(*this)}; }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() { std::terminate(); }
        
        auto await_transform(std::future f) {
            fut = std::move(f);
            return std::suspend_always{};
        }
    };

    std::coroutine_handle handle;
    
    void resume() { handle.resume(); }
};

AsyncTask fetchData() {
    auto fut = std::async([]() { 
        std::this_thread::sleep_for(std::chrono::seconds(1)); 
        return 42; 
    });
    
    int result = co_await fut;
    std::cout << "Fetched: " << result << "\n";
}

int main() {
    AsyncTask task = fetchData();
    task.resume(); // Starts the coroutine
    std::cout << "Waiting for async operation...\n";
    task.resume(); // Resumes after await
}