class Complex {  
public:  
    Complex(double real, double imag);  
    Complex operator+(const Complex& other) const;  
    Complex operator-(const Complex& other) const;  
    Complex operator*(const Complex& other) const;  
    // Add other necessary methods  
private:  
    double real, imag;  
};