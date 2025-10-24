#include 
#include 

int main() {
    std::vector vec = {1, 2, 3, 4, 5};
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        if (*it % 2 == 0) {
            vec.erase(it);
        }
    }
    for (int num : vec) {
        std::cout << num << " ";
    }
}