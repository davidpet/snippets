#include <iostream>
#include <map>

template<typename P, typename R>
class PointAndRef;

template<typename P, typename R>
class PointAndRef<P*, R&> {
    public:
        void f(P *p, R &r) {
            std::cout << *p << ", " << r << std::endl;
        }
};

template<typename>
class Array;

template<typename T, size_t N>
class Array<T[N]> {
    public:
        void f(T t[N]) {
            for (int i = 0; i < N; i++) {
                std::cout << t[i] << std::endl;
            }
        }
};

template<typename T>
class Func;

template<typename Ret, typename Arg>
class Func<Ret(Arg)> {
    public:
        Ret apply(Ret(*fn)(Arg), Arg a) {
            return fn(a);
        }
};

int main() {
    // PointAndRef<int, int> p; // ILLEGAL because incomplete
    PointAndRef<int*, int&> p;

    int x = 10, y = 20;
    p.f(&x, y); // 10, 20

    Array<int[5]> a;
    int arr[] = {1, 2, 3, 4, 5};
    a.f(arr); // on separate lines: 1, 2, 3, 4, 5

    Func<int(int)> f;
    std::cout << f.apply([](int x) { return x + 10;}, 100) << std::endl; // 110

    return 0;
}
