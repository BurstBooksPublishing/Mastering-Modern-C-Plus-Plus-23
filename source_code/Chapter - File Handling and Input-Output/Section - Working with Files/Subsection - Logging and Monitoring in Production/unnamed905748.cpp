#include 
#include 
#include 

enum class LogError { file_failure, write_failure };

std::expected 
log_fault_tolerant(std::string_view message, std::string_view primary_path);