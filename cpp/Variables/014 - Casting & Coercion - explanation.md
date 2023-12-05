# Casting & Coercion

1. Implicit casting (coercion) is when the compiler automatically changes one data type into another. In the example, an integer is implicitly cast to a double.
    - also works for taking a base pointer/reference from a derived one
2. Explicit casting is when the programmer manually changes the data type. In the example, a double is explicitly cast to an integer using C-style casting.
3. C++ style casting is a safer and more visible version of C-style casting. In the example, a double is cast to an integer using static_cast.
    - static_cast works for most simple scenarios:
      - eg. number up or down casts
      - eg. derived class to base
      - eg. enum to int and vice versa
4. Dynamic casting is used for handling polymorphism. It converts a base class pointer or reference to a derived class pointer or reference. In the example, a base class pointer is dynamically cast to a derived class pointer.
    - Dynamic casting relies on __Runtime Type Information (RTTI)__ which (I think) is enabled by default but can be disabled.
    - a failed dynamic cast will not throw - it will simply return `nullptr`
5. Const casting is used to add or remove the constness of a variable. In the example, the constness of a const integer is removed using const_cast.
6. Reinterpret casting is used for low-level operations. It converts one pointer type to another. In the example, an integer pointer is reinterpret cast to a character pointer.

