#include <iostream>

// Define a generic class with a single type parameter T
template <typename T>
class GenericClass {
private:
    T data;
    GenericClass *p;

public:
    // Constructor
    GenericClass(T d) : data(d), p(this) {}

    // Getter
    T getData() {
        // std::cout << p->data << std::endl; //included for illustration only

        return data;
    }

    // Setter
    void setData(T d) {
        data = d;
    }
};

// Define a generic class with multiple type parameters T and U
template <typename T, typename U>
class MultiGenericClass {
private:
    T data1;
    U data2;

public:
    // Constructor
    MultiGenericClass(T d1, U d2) : data1(d1), data2(d2) {}

    // Getters
    T getData1() {
        return data1;
    }

    U getData2() {
        return data2;
    }

    // Setters
    void setData1(T d1) {
        data1 = d1;
    }

    void setData2(U d2) {
        data2 = d2;
    }
};

int main() {
    // Create an instance of GenericClass with int type
    GenericClass<int> intClass(10);
    std::cout << intClass.getData() << std::endl; // Expected output: 10

    // Create an instance of GenericClass with string type
    GenericClass<std::string> stringClass("Hello");
    std::cout << stringClass.getData() << std::endl; // Expected output: Hello

    // Create an instance of MultiGenericClass with int and string types
    MultiGenericClass<int, std::string> multiClass(20, "World");
    std::cout << multiClass.getData1() << ", " << multiClass.getData2() << std::endl; // Expected output: 20, World

    // C++ 17 type inference
    GenericClass intClass2(10);
    std::cout << intClass2.getData() << std::endl; // Expected output: 10

    return 0;
}
