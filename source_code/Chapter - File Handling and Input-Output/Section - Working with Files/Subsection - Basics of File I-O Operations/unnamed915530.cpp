#include 
#include 
#include 

void process_file(std::ifstream& in, std::ofstream& out, int file_num) {
    std::string line;
    int line_num = 0;

    while (std::getline(in, line)) {
        if (line.empty()) continue;
        ++line_num;
        out << file_num << "." << line_num << ": " << line << '\n';
    }
}

int main() {
    std::ifstream file1("file1.txt");
    std::ifstream file2("file2.txt");
    std::ofstream merged("merged.txt");

    if (!file1 || !file2 || !merged) return 1;

    process_file(file1, merged, 1);
    process_file(file2, merged, 2);
}