#include 
#include 
#include 

enum class Severity { Info, Warning, Error };

void log_message(Severity level, const std::string& message);