C++ does not have a direct equivalent to "Ambient Declarations" as found in TypeScript or other languages. However, the concept of forward declarations in C++ is somewhat similar. Forward declarations are a way to declare an identifier before giving a complete definition. They are used to solve problems with circular dependencies and to improve compile times.

Here is an example of how forward declarations can be used in C++:

// Forward declaration of class B
class B;

class A {
public:
    A(B* b) : b_(b) {}
    void UseB();

private:
    B* b_;
};

class B {
public:
    void Print() { std::cout << "B::Print()" << std::endl; }
};

// Now that B is fully defined, we can define A::UseB
void A::UseB() {
    b_->Print();  // This will print "B::Print()"
}

int main() {
    B b;
    A a(&b);
    a.UseB();  // This will print "B::Print()"
    return 0;
}