// Example for std::unordered_map
#include 
std::unordered_map order_book;
order_book.emplace(12345, 100.50); // Insert
auto it = order_book.find(12345);  // Lookup

// Example for sorted std::vector
#include 
#include 
std::vector> sorted_book;
sorted_book.emplace_back(12345, 100.50);
std::sort(sorted_book.begin(), sorted_book.end());
auto it = std::lower_bound(sorted_book.begin(), sorted_book.end(), 
                          std::make_pair(12345, 0.0));