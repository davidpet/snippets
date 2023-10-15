# Destructors

In the code, we have a class named `MyClass` with a constructor and a destructor. The constructor is called when an object of the class is created, and the destructor is called when the object goes out of scope or is explicitly deleted.

Destructors in C++ are used to deallocate memory and do other cleanup for a class object and its class members when the object is destroyed. A destructor is called for a class object when that object passes out of scope or is explicitly deleted.

A destructor takes no arguments and has no return type. Its name is the same as the class name but is preceded by a tilde (~). For example, the destructor for class MyClass is ~MyClass().

If we do not provide a destructor in a class, C++ compiler generates a default destructor for us, which does nothing.

A destructor on a class that's meant to be used as a base pointer should be marked `virtual` so that if deleted via the base, the derived destructor can be called properly (before the base).
