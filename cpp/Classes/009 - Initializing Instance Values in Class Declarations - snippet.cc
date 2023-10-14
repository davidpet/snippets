#include <iostream>

// Define a class named 'Person'
class Person {
public:
    // Declare and initialize instance variables in class declaration
    // This is a C++11 feature
    std::string name = "John Doe";
    int age = 30;

    // Define a method to print the person's details
    void printDetails() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Define another class named 'Employee' that inherits from 'Person'
class Employee : public Person {
public:
    // Declare and initialize instance variables in class declaration
    std::string jobTitle = "Software Engineer";
    double salary = 50000.0;

    // Override the printDetails method to include job title and salary
    void printDetails() {
        std::cout << "Name: " << name << ", Age: " << age << ", Job Title: " << jobTitle << ", Salary: " << salary << std::endl;
    }
};

int main() {
    // Create an instance of 'Person'
    Person person;
    person.printDetails();  // Expected output: Name: John Doe, Age: 30

    // Create an instance of 'Employee'
    Employee employee;
    employee.printDetails();  // Expected output: Name: John Doe, Age: 30, Job Title: Software Engineer, Salary: 50000
}