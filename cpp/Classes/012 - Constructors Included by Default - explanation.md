# Constructors Included by Default

By default, 5 members are included in a class:
1. Default constructor
   - no args, all members default constructed (junk for numbers)
1. Copy constructor
   - memberwise copy construction
   - if any member doesn't support that, it won't be available
1. Move constructor
   - rvalue reference
   - memberwise move constructor
   - if any member doesn't have, falls back to copy constructor for that member
1. Copy Assignment
   - similar logic to copy constructor, but only used on existing instance
   - does not reuse or rely on copy constructor
1. Move Assignment
   - similar logic to move constructor, but only used on existing instance
   - does not reuse or rely on move constructor

If you provide a __parameterized constructor__, you lose your default constructor, but keep the other 4 things.  You can get the default constructor back by providing your own.

You can __provide any__ of the above 5 members yourself to __replace the automatic one__. This includes providing it with a different access level, such as using a private default constructor to only allow your own factory to create that way.

You can also __explicitly remove__ an automatically generated member by declaring it with `= delete`.  This is similar syntax to declaring a pure virtual member but using the `delete` keyword instead of `0`.

You can __explicitly include__ an automatically generated member by declaring it with `= default`.  There are a couple of reasons you might do this:
1. Restore the __default constructor__ that you lose when you define other constructors.
1. Signal that you're using the default for __readability__ reasons.
1. Change the __visibility__ of a default constructor without having to redefine it.
1. For a __destructor__ to signal that you know you're using the base (usually virtual) one.

It's also worth noting that the following line will use a __copy constructor__, not a copy assignment:
```C++
MyClass m = n;
```
But the following line will use __copy assignment__ because m already exists:
```C++
m = n;
```

Note: technically you also get a __destructor__ automatically but the default doesn't do anything.
