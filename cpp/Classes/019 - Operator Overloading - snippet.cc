#include <iostream>

// Define a simple class to demonstrate operator overloading
class Complex {
public:
    int real, imag;

    // Constructor
    Complex(int r = 0, int i =0) {
        real = r;
        imag = i;
    }

    // Overload the + operator
    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    // Overload the << operator
    friend std::ostream& operator << (std::ostream& out, const Complex& c) {
        out << c.real;
        out << "+i" << c.imag << std::endl;
        return out;
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    std::cout << c3; // An example call to "operator<<"
    return 0;
}