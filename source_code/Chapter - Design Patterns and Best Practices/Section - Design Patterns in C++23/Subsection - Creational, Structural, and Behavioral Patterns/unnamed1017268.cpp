#include 

struct Point { int x; int y; };

class LegacyRectangle {
public:
    void draw(int x1, int y1, int x2, int y2) {
        // Legacy drawing logic
    }
};

class ModernRectangle {
public:
    void draw(Point topLeft, Point bottomRight) {
        legacy.draw(topLeft.x, topLeft.y, bottomRight.x, bottomRight.y);
    }

private:
    LegacyRectangle legacy;
};