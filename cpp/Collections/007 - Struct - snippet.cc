#include <iostream>

// Define a struct named 'Person'
struct Person {
    // Declare member variables
    std::string name;
    int age;
    float height;
};

// Define a struct with constructor
struct Book {
    std::string title;
    int pages;

    // Constructor
    Book(std::string t, int p) {
        title = t;
        pages = p;
    }
};

// Define a struct with methods
struct Rectangle {
    int width;
    int height;

    // Method to calculate area
    int area() {
        return width * height;
    }
};

int main() {
    // Create an instance of the 'Person' struct
    Person person1;
    person1.name = "John";
    person1.age = 30;
    person1.height = 5.9;

    std::cout << person1.name << " is " << person1.age << " years old and " << person1.height << " feet tall." << std::endl; // Prints: John is 30 years old and 5.9 feet tall.

    // Create an instance of the 'Book' struct using the constructor
    Book book1("C++ Programming", 500);
    std::cout << "The book titled '" << book1.title << "' has " << book1.pages << " pages." << std::endl; // Prints: The book titled 'C++ Programming' has 500 pages.

    // Create an instance of the 'Rectangle' struct and use its method
    Rectangle rect1;
    rect1.width = 10;
    rect1.height = 5;
    std::cout << "The area of the rectangle is " << rect1.area() << "." << std::endl; // Prints: The area of the rectangle is 50.

    return 0;
}