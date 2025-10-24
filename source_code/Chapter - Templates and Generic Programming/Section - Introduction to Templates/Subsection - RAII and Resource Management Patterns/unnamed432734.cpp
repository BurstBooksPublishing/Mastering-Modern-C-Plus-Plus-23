class FileHandle {
public:
    // ... (previous constructors and methods)

    FileHandle(FileHandle&& other) noexcept : file(std::move(other.file)) {}

    FileHandle& operator=(FileHandle&& other) noexcept {
        if (this != &other) {
            if (file.is_open()) {
                file.close();
            }
            file = std::move(other.file);
        }
        return *this;
    }
};