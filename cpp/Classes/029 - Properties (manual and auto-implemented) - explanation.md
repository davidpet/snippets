# Properties (manual and auto-implemented)

Unfortunately, C++ does not support auto-implemented properties like some other languages (e.g., C#). In C++, you have to manually create getters and setters for each property you want to expose. However, you can use some features of C++ to make this process easier and more automatic, such as macros or code generation tools, but these are outside the scope of this discussion.

In C++, it's also common to directly expose members as public without getters and setters if you don't need to control their access or modify their behavior. This is not exactly the same as auto-implemented properties, but it's a similar concept.
