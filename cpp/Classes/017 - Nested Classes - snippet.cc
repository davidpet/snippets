#include <iostream>

// Define a class 'Outer'
class Outer {
private:
    class PrivateInner {};
public:
    // Define a public member variable
    int outer_var = 10;

    // Define a public nested class 'Inner'
    class Inner {
    public:
        // Define a public member variable
        int inner_var = 20;
    };

    // Define a public member function that creates an instance of 'Inner'
    // and prints the value of 'inner_var'
    void printInnerVar() {
        Inner inner;
        std::cout << "Inner var: " << inner.inner_var << std::endl; // Expected to print: Inner var: 20
    }
};

// Define a function that creates an instance of 'Outer' and 'Inner'
// and prints the values of 'outer_var' and 'inner_var'
void printVars() {
    Outer outer;
    Outer::Inner inner;
    // Outer::PrivateInner inner2; // ILLEGAL

    std::cout << "Outer var: " << outer.outer_var << std::endl; // Expected to print: Outer var: 10
    std::cout << "Inner var: " << inner.inner_var << std::endl; // Expected to print: Inner var: 20
}

int main() {
    printVars();

    Outer outer;
    outer.printInnerVar();

    return 0;
}