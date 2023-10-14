# Caveats for Subclass Constructors (eg. when to call base, construction order, etc.)
In C++, the constructor of a base class is always called before the constructor of a derived class. Similarly, the destructor of a derived class is called before the destructor of its base class. This is demonstrated in the code snippet above.

The base class constructor is called automatically when an object of the derived class is created. There is no need to explicitly call the base class constructor from the derived class constructor. However, if the base class has a constructor with parameters, you will need to call this constructor explicitly from the derived class constructor.

The order of constructor and destructor calls is important to understand because it affects how resources are allocated and deallocated. When an object of a derived class is created, resources are first allocated for the base class part of the object, then for the derived class part. When the object is destroyed, resources are first deallocated for the derived class part of the object, then for the base class part.

In the code snippet, the `Base` class has a virtual destructor. This is important when a base class pointer is deleted. If the base class destructor is not virtual, then the derived class destructor will not be called when a base class pointer to a derived class object is deleted, leading to potential resource leaks.

The code snippet demonstrates the basic usage of constructors and destructors in a class hierarchy. There are many more details and caveats to consider in real-world code, such as handling of exceptions in constructors and destructors, order of construction and destruction of member objects, and so on.