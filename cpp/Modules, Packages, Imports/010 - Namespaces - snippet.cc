// C++ Namespaces

// A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. 
// Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.

// Here is a simple example of a namespace declaration and usage.

namespace MyNamespace {
    int myVar = 10;
    void myFunction() {
        std::cout << "Hello from MyNamespace!" << std::endl;
    }
}

int main() {
    std::cout << MyNamespace::myVar << std::endl; // prints 10
    MyNamespace::myFunction(); // prints "Hello from MyNamespace!"
}

// You can also use the 'using' directive to bring names from a namespace into the current scope.

using namespace MyNamespace;

int main() {
    std::cout << myVar << std::endl; // prints 10
    myFunction(); // prints "Hello from MyNamespace!"
}

// Be careful when using the 'using' directive to bring entire namespaces into scope to avoid name collisions.

// You can also create nested namespaces.

namespace Outer {
    int outerVar = 20;
    namespace Inner {
        int innerVar = 30;
    }
}

int main() {
    std::cout << Outer::outerVar << std::endl; // prints 20
    std::cout << Outer::Inner::innerVar << std::endl; // prints 30
}

// From C++17, you can use the nested namespace definition.

namespace Outer::Inner {
    int innerVar = 40;
}

int main() {
    std::cout << Outer::Inner::innerVar << std::endl; // prints 40
}

// You can also use unnamed namespaces, which have potential linkage (they can be accessed only within the same file).

namespace {
    int unnamedVar = 50;
}

int main() {
    std::cout << unnamedVar << std::endl; // prints 50
}

// You can also use inline namespaces, which allow the use of their entities in the enclosing namespace scope.

namespace MyNamespace {
    inline namespace Inline {
        int inlineVar = 60;
    }
}

int main() {
    std::cout << MyNamespace::inlineVar << std::endl; // prints 60
}