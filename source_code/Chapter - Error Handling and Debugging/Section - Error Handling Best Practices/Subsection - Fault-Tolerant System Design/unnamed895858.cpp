#include 
#include 
#include 

class FallbackExecutor {
public:
    FallbackExecutor(
        std::function primary,
        std::function fallback
    );
    void execute();
private:
    std::function primary_;
    std::function fallback_;
};