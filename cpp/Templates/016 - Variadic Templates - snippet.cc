#include <iostream>

/////// Variadic Function Template///////////
// Base function to end the recursion
void print() {}

// Recursive variadic function
template <typename T, typename... Args>
void print(T head, Args... tail) {
    std::cout << head << " ";
    print(tail...);
}

//////// Variadic Class Template/////////////
template <typename... Args>
class MyTuple;

template <>
class MyTuple<> {
    public:
        void print() {}
};

template <typename Head, typename... Tail>
class MyTuple<Head, Tail...> {
    Head head;
    MyTuple<Tail...> tailTuple;

public:
    MyTuple(Head h, Tail... t) : head(h), tailTuple(t...) {}
    // Accessors, other member functions, etc. can be added here

    void print() {
        std::cout << head << " ";
        tailTuple.print();
    }
};

//////// Testing Both /////////
int main() {
    print(1, 2.0, "three", '4'); // 1 2 three 4

    MyTuple<int, double, char> myData(1, 3.14, 'a');
    std::cout << "MyTuple contains: ";
    myData.print(); // 1 3.14 a
    std::cout << std::endl;

    return 0;
}

///////// Non-Recursive Usage ////////
template <typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
