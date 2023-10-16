#include <iostream>

struct MyStruct {
    int x;

    private:
        int y;
};

class MyClass {
    int x;

    public:
        int y;
};

int main() {
    MyClass m;
    // std::cout << m.x << std::endl;
    std::cout << m.y << std::endl;

    MyStruct s;
    std::cout << s.x << std::endl;
    // std::cout << s.y << std::endl;

    return 0;
}
