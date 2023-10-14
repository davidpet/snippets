Sure, let's start with a basic class in C++ and then we'll add properties to it. 

#include <iostream>
#include <string>

// Define a basic class
class Person {
public:
    // Constructor
    Person(std::string name) : _name(name) {}

    // Getter for name
    std::string getName() const {
        return _name;
    }

    // Setter for name
    void setName(std::string name) {
        _name = name;
    }

private:
    std::string _name;
};

int main() {
    // Create a new person
    Person person("John Doe");

    // Print the person's name
    std::cout << person.getName() << std::endl; // Expected output: John Doe

    // Change the person's name
    person.setName("Jane Doe");

    // Print the person's name again
    std::cout << person.getName() << std::endl; // Expected output: Jane Doe

    return 0;
}