#include 
#include 

class FileHandler {
public:
    explicit FileHandler(const std::string& filename);
    ~FileHandler();
    std::string readContents();
private:
    std::ifstream file;
};