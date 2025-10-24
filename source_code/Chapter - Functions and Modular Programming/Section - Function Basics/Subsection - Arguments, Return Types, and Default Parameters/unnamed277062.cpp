#include 
#include 

std::string configureLogger(
    const std::string& logLevel = "INFO",
    bool timestamp = true,
    int maxLines = 1000
) {
    return "[LEVEL: " + logLevel + 
           "][TIMESTAMP: " + (timestamp ? "on" : "off") + 
           "][MAXLINES: " + std::to_string(maxLines) + "]";
}