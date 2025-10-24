void writeToFile(const std::string& filename, const std::string& content) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file");
    }
    file << content;
    // Missing explicit close() call
}