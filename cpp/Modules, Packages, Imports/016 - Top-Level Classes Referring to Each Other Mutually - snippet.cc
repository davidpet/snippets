// Forward declaration of class B
class B;

// Definition of class A
class A {
public:
    A(B* b) : b_(b) {}
    void printB();

private:
    B* b_;
};

// Definition of class B
class B {
public:
    B(int val) : val_(val) {}
    int getValue() { return val_; }

private:
    int val_;
};

// Implementation of A's method that uses B
void A::printB() {
    std::cout << "B's value: " << b_->getValue() << std::endl; // This will print: B's value: 10
}

int main() {
    B b(10);
    A a(&b);
    a.printB();
    return 0;
}