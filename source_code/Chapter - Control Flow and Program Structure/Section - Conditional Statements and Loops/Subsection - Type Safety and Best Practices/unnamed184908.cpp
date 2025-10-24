std::vector> data = {{1, "apple"}, {2, "banana"}};
for (const std::pair& item : data) {
    std::cout << item.first << ": " << item.second << "\n";
}