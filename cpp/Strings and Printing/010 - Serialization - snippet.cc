Sure, here is a code snippet demonstrating serialization in C++ using strings:

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Define a simple struct to demonstrate serialization
struct Person {
    std::string name;
    int age;

    // Overload the << operator to easily print a Person
    friend std::ostream& operator<<(std::ostream& os, const Person& p) {
        os << p.name << " " << p.age;
        return os;
    }

    // Overload the >> operator to easily read a Person
    friend std::istream& operator>>(std::istream& is, Person& p) {
        is >> p.name >> p.age;
        return is;
    }
};

int main() {
    // Create a Person object
    Person p1 = {"John", 25};

    // Serialize the Person object to a string
    std::ostringstream oss;
    oss << p1;

    std::string serializedPerson = oss.str();

    std::cout << "Serialized Person: " << serializedPerson << std::endl; // Expected: "Serialized Person: John 25"

    // Deserialize the string back to a Person object
    std::istringstream iss(serializedPerson);
    Person p2;
    iss >> p2;

    std::cout << "Deserialized Person: " << p2 << std::endl; // Expected: "Deserialized Person: John 25"

    return 0;
}