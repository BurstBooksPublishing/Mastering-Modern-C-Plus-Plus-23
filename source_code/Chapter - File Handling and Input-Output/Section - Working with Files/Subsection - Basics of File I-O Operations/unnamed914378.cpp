#include 
#include 
#include 

namespace fs = std::filesystem;

int main() {
    fs::path source = "source.bin";
    fs::path dest = "destination.bin";

    std::ifstream in(source, std::ios::binary);
    if (!in) return 1;

    std::ofstream out(dest, std::ios::binary);
    if (!out) return 1;

    constexpr size_t chunk_size = 1024;
    char buffer[chunk_size];
    size_t total_bytes = fs::file_size(source);
    size_t copied_bytes = 0;

    while (in) {
        in.read(buffer, chunk_size);
        out.write(buffer, in.gcount());
        copied_bytes += in.gcount();

        if (copied_bytes / chunk_size % 100 == 0) {
            std::cout << "Progress: " 
                      << (copied_bytes * 100 / total_bytes) 
                      << "%\n";
        }
    }
}