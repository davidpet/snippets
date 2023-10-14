#include <iostream>

// Class declaration
class MyClass {
    private:
        int privateVar;

    public:
        MyClass() : privateVar(0) {}

        // Friend class declaration
        friend class MyFriendClass;
};

// Friend class definition
class MyFriendClass {
    public:
        void changePrivateVar(MyClass &obj, int val) {
            // Accessing private member of MyClass
            obj.privateVar = val;
        }

        void printPrivateVar(MyClass &obj) {
            // Accessing private member of MyClass
            std::cout << "PrivateVar: " << obj.privateVar << std::endl; // This will print the value of privateVar
        }
};

int main() {
    MyClass obj;
    MyFriendClass friendObj;

    // Changing and printing privateVar using friend class
    friendObj.changePrivateVar(obj, 5);
    friendObj.printPrivateVar(obj); // This should print: PrivateVar: 5

    return 0;
}