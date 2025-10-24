std::string read_file(const std::string& path) {
    std::ifstream file(path);
    file.seekg(0, std::ios::end);
    auto size = file.tellg();
    char* buffer = new char[size]; // Potential leak
    file.seekg(0);
    file.read(buffer, size);
    return std::string(buffer, size);
}