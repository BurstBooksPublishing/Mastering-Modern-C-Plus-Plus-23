#include 

struct Point3D {
    double x, y, z;
};

int main() {
    Point3D* points = new Point3D[3];
    
    for (int i = 0; i < 3; ++i) {
        (points + i)->x = i * 1.1;
        (points + i)->y = i * 2.2;
        (points + i)->z = i * 3.3;
        std::cout << (points + i)->x << ", " 
                  << (points + i)->y << ", " 
                  << (points + i)->z << "\n";
    }
    
    delete[] points;
    return 0;
}