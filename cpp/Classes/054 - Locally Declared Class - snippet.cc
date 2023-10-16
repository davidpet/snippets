#include <iostream>

class MyInterface {
    public:
        virtual void f() = 0;

        virtual ~MyInterface() {}
};

MyInterface* getSomething(int x) {
    class MyImplementation : public MyInterface {
        public:
            void f() override {
                std::cout << "Hi!" << std::endl;
                // std::cout << x << std::endl; // ILLEGAL
            }
    };

    return new MyImplementation();
}

int main() {
    class MyClass {};
    MyClass m;

    /* ILLEGAL
    void f() {}
    f();
    */

    auto p = getSomething(100);
    p->f(); // should print "Hi!"
    delete p;

    return 0;
}
