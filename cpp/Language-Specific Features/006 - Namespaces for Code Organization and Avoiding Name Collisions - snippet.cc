// C++ Namespaces Example

// Declare a namespace named 'namespace1'
namespace namespace1 {
    int var = 100;  // Declare an integer variable 'var' in 'namespace1'
}

// Declare another namespace named 'namespace2'
namespace namespace2 {
    int var = 200;  // Declare an integer variable 'var' in 'namespace2'
}

// Declare a function to demonstrate usage of namespaces
void printVar() {
    // Access 'var' from 'namespace1' and 'namespace2'
    std::cout << "namespace1::var: " << namespace1::var << std::endl;  // This will print: namespace1::var: 100
    std::cout << "namespace2::var: " << namespace2::var << std::endl;  // This will print: namespace2::var: 200
}

// Declare a namespace with nested namespaces
namespace parent {
    namespace child1 {
        int var = 300;
    }
    namespace child2 {
        int var = 400;
    }
}

// Declare a function to demonstrate usage of nested namespaces
void printNestedVar() {
    // Access 'var' from 'child1' and 'child2' under 'parent' namespace
    std::cout << "parent::child1::var: " << parent::child1::var << std::endl;  // This will print: parent::child1::var: 300
    std::cout << "parent::child2::var: " << parent::child2::var << std::endl;  // This will print: parent::child2::var: 400
}

// Using directive to bring all names from a namespace into current scope
using namespace namespace1;

// Declare a function to demonstrate usage of 'using' directive
void printUsingVar() {
    // Now we can directly use 'var' from 'namespace1' without prefixing it with 'namespace1::'
    std::cout << "var: " << var << std::endl;  // This will print: var: 100
}

int main() {
    printVar();
    printNestedVar();
    printUsingVar();
    return 0;
}