#include 
#include 
#include 

int main() {
    std::ifstream input("input.txt");
    if (!input.is_open()) {
        return 1;
    }

    std::ofstream output("output.txt");
    if (!output.is_open()) {
        return 1;
    }

    std::string line;
    while (std::getline(input, line)) {
        for (char& c : line) {
            c = std::toupper(c);
        }
        output << line << '\n';
    }
}