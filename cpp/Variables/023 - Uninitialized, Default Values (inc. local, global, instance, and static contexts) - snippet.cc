#include <iostream>

// Global variable declaration without initialization
int globalVar;

// Global variable declaration with initialization
int globalVarInit = 10;

// Static variable declaration without initialization
static int staticVar;

// Static variable declaration with initialization
static int staticVarInit = 20;

class MyClass {
public:
    // Instance variable declaration without initialization
    int instanceVar;

    // Instance variable declaration with initialization
    int instanceVarInit = 30;

    // Static variable declaration without initialization
    static int staticClassVar;

    // Static variable declaration with initialization
    static int staticClassVarInit;
};

// Initialization of static variable in class
int MyClass::staticClassVarInit = 40;

int main() {
    // Local variable declaration without initialization
    int localVar;

    // Local variable declaration with initialization
    int localVarInit = 50;

    // Static local variable declaration without initialization
    static int staticLocalVar;

    // Static local variable declaration with initialization
    static int staticLocalVarInit = 60;

    // Instance of MyClass
    MyClass myClass;

    std::cout << "globalVar: " << globalVar << std::endl; // Expected to print: globalVar: 0
    std::cout << "globalVarInit: " << globalVarInit << std::endl; // Expected to print: globalVarInit: 10
    std::cout << "staticVar: " << staticVar << std::endl; // Expected to print: staticVar: 0
    std::cout << "staticVarInit: " << staticVarInit << std::endl; // Expected to print: staticVarInit: 20
    std::cout << "instanceVar: " << myClass.instanceVar << std::endl; // Expected to print: instanceVar: random value
    std::cout << "instanceVarInit: " << myClass.instanceVarInit << std::endl; // Expected to print: instanceVarInit: 30
    std::cout << "staticClassVar: " << MyClass::staticClassVar << std::endl; // Expected to print: staticClassVar: 0
    std::cout << "staticClassVarInit: " << MyClass::staticClassVarInit << std::endl; // Expected to print: staticClassVarInit: 40
    std::cout << "localVar: " << localVar << std::endl; // Expected to print: localVar: random value
    std::cout << "localVarInit: " << localVarInit << std::endl; // Expected to print: localVarInit: 50
    std::cout << "staticLocalVar: " << staticLocalVar << std::endl; // Expected to print: staticLocalVar: 0
    std::cout << "staticLocalVarInit: " << staticLocalVarInit << std::endl; // Expected to print: staticLocalVarInit: 60

    return 0;
}