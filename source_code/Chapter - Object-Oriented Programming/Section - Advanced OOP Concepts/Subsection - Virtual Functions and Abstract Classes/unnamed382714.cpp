class Drawable {
public:
    virtual void draw() const = 0;
    virtual ~Drawable() = default;
};

class Shape : public Drawable {
public:
    virtual double area() const = 0;
};

class Circle : public Shape {
    double radius;
public:
    explicit Circle(double r) : radius(r) {}
    double area() const override { return M_PI * radius * radius; }
    void draw() const override { std::cout << "Drawing a circle\n"; }
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override { return width * height; }
    void draw() const override { std::cout << "Drawing a rectangle\n"; }
};