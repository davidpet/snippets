# Boxing/Unboxing

Boxing and unboxing is a concept that is more relevant to languages like C# and Java, which have value types and reference types. In these languages, boxing is the process of converting a value type to the type object or to any interface type implemented by this value type. Unboxing extracts the value type from the object.

In C++, there is no direct equivalent of boxing and unboxing because all types are value types and there is no common base class for all objects. However, we can achieve similar functionality using polymorphism and inheritance, or using std::any (since C++17) or boost::any for older versions.
