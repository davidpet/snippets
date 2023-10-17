#include <iostream>
#include <string>
#include <functional>

// Custom class
class MyClass {
    int id;
    std::string name;
public:
    MyClass(int i, const std::string& n) : id(i), name(n) {}

    int getId() const { return id; }
    const std::string& getName() const { return name; }

    // Overloading == operator for the class to be used in hash comparison
    bool operator==(const MyClass& other) const {
        return id == other.id && name == other.name;
    }
};

// Specialization of std::hash for MyClass
namespace std {
    template <>
    struct hash<MyClass> {
        size_t operator()(const MyClass& obj) const {
            // Combine the hashes of individual members
            return hash<int>()(obj.getId()) ^ hash<string>()(obj.getName());
        }
    };
}

int main() {
    // Using std::hash with built-in types
    std::hash<int> hashInt;
    std::hash<std::string> hashString;

    std::cout << "Hash of integer 42: " << hashInt(42) << std::endl;
    std::cout << "Hash of string \"test\": " << hashString("test") << std::endl;

    // Using std::hash with custom type
    MyClass obj(1, "example");
    std::hash<MyClass> hashMyClass;
    std::cout << "Hash of MyClass object: " << hashMyClass(obj) << std::endl;

    return 0;
}
