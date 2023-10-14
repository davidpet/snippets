# Exporting and Access levels
In C++, there are three access levels: public, private, and protected. Public members can be accessed from anywhere. Private members can only be accessed from within the class. Protected members can be accessed from within the class and from subclasses.

Here's an example of how you might use the protected access level:

```cpp
// File: base_class.hpp
#ifndef BASE_CLASS_HPP
#define BASE_CLASS_HPP

class BaseClass {
public:
    void publicMethod();

protected:
    void protectedMethod();
};

#endif
```

```cpp
// File: derived_class.hpp
#ifndef DERIVED_CLASS_HPP
#define DERIVED_CLASS_HPP

#include "base_class.hpp"

class DerivedClass : public BaseClass {
public:
    void callProtectedMethod();
};

#endif
```

```cpp
// File: derived_class.cpp
#include "derived_class.hpp"
#include <iostream>

void DerivedClass::callProtectedMethod() {
    protectedMethod();
}

void BaseClass::publicMethod() {
    std::cout << "Public method called!" << std::endl;
}

void BaseClass::protectedMethod() {
    std::cout << "Protected method called!" << std::endl;
}
```

```cpp
// File: main.cpp
#include "derived_class.hpp"

int main() {
    DerivedClass myObject;
    myObject.publicMethod(); // prints "Public method called!"
    myObject.callProtectedMethod(); // prints "Protected method called!"
    return 0;
}
```

In this example, `DerivedClass` is a subclass of `BaseClass`. It can access the protected members of `BaseClass`, but not the private members.