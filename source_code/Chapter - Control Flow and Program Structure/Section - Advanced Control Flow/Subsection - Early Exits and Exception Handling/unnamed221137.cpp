#include 

bool is_palindrome(std::string_view s) {
    if (s.empty() || s.size() == 1) return true;
    if (s.front() != s.back()) return false;
    return is_palindrome(s.substr(1, s.size() - 2));
}