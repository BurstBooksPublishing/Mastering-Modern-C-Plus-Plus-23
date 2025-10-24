#include 

class ScopedLock {
public:
    explicit ScopedLock(std::mutex& mtx) : mutex(mtx) {
        mutex.lock();
    }

    ~ScopedLock() {
        mutex.unlock();
    }

    ScopedLock(const ScopedLock&) = delete;
    ScopedLock& operator=(const ScopedLock&) = delete;

    ScopedLock(ScopedLock&&) = default;
    ScopedLock& operator=(ScopedLock&&) = default;

private:
    std::mutex& mutex;
};