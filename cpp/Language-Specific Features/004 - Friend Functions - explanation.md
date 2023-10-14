# Friend Functions
1. In the above code, we have a class `MyClass` with a private member `privateVar`. Normally, this member can't be accessed directly from outside the class.

2. We declare a friend function `accessPrivateVar` inside the class. This function is not a member of the class, but it can access all members (public, protected, and private) of the class because it is declared as a friend.

3. In the `main` function, we create an object of `MyClass` and call the friend function `accessPrivateVar`, passing the object as an argument. The function then accesses and prints the private member `privateVar`.

4. Friend functions can be non-member functions (as shown in the example), member functions of another class, or even a whole other class. Here's an example of a friend class:

```cpp
class AnotherClass; // Forward declaration

class MyClass {
private:
    int privateVar;

public:
    MyClass() : privateVar(20) {}

    // Friend class declaration
    friend class AnotherClass;
};

class AnotherClass {
public:
    void accessPrivateVar(MyClass& obj) {
        std::cout << "Private Variable: " << obj.privateVar << std::endl; // Expected output: Private Variable: 20
    }
};

int main() {
    MyClass obj;
    AnotherClass anotherObj;
    anotherObj.accessPrivateVar(obj);
    return 0;
}
```

5. In this example, `AnotherClass` is a friend of `MyClass`, so all of its member functions can access all members of `MyClass`. We create objects of both classes in `main`, and then use a member function of `AnotherClass` to access and print the private member `privateVar` of `MyClass`.

6. Note that friendship in C++ is not symmetric (if A is a friend of B, B is not automatically a friend of A) and is not transitive (the friends of your friends are not your friends).