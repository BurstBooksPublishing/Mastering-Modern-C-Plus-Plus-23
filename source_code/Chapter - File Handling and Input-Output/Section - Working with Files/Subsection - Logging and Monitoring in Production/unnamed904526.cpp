#include 
#include 
#include 
#include 

enum class LogLevel { info, warning, error };

void log(LogLevel level, std::string_view message, auto&&... key_value_pairs) {
    // Your implementation here
}