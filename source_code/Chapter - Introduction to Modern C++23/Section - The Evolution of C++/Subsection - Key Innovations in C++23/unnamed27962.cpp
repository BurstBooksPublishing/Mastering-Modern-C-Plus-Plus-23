#include 
#include 
#include 

std::optional parseInt(const std::string& s) {
    try { return std::stoi(s); }
    catch (...) { return std::nullopt; }
}

int main() {
    std::string a = "42", b = "abc";
    // Your code here: parse a and b, compute sum or print "Invalid input"
}