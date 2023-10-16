#include <iostream>

/**
 * Class: Rectangle
 * A class that represents a rectangle.
 *
 * Attributes:
 *  width: The width of the rectangle.
 *  height: The height of the rectangle.
 */
class Rectangle {
    private:
        double width;  // The width of the rectangle.
        double height; // The height of the rectangle.

    public:
        /**
         * Constructor: Rectangle
         * Creates a new rectangle with the given width and height.
         *
         * Parameters:
         *  w: The width of the rectangle.
         *  h: The height of the rectangle.
         */
        Rectangle(double w, double h) {
            width = w;
            height = h;
        }

        /**
         * Method: area
         * Returns the area of the rectangle.
         *
         * Returns:
         *  The area of the rectangle.
         */
        double area() {
            return width * height;
        }

        /**
         * Method: perimeter
         * Returns the perimeter of the rectangle.
         *
         * Returns:
         *  The perimeter of the rectangle.
         */
        double perimeter() {
            return 2 * (width + height);
        }
};

int main() {
    Rectangle rect(3.0, 4.0);
    std::cout << "Area: " << rect.area() << std::endl; // Expected output: Area: 12
    std::cout << "Perimeter: " << rect.perimeter() << std::endl; // Expected output: Perimeter: 14
    return 0;
}