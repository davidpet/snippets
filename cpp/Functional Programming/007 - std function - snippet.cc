#include <iostream>
#include <memory>

template<typename>
class std_function;

template<typename Ret, typename... Args>
class std_function<Ret(Args...)> {
private:
    struct BaseCallable {
        virtual ~BaseCallable() {}
        virtual Ret operator()(Args...) = 0;
    };

    template<typename Callable>
    struct CallableWrapper : BaseCallable {
        Callable callable;
        CallableWrapper(Callable&& c) : callable(std::forward<Callable>(c)) {}
        Ret operator()(Args... args) override {
            return callable(std::forward<Args>(args)...);
        }
    };

    std::unique_ptr<BaseCallable> callable;

public:
    std_function() = default;

    template<typename Callable>
    std_function(Callable&& c)
        : callable(std::make_unique<CallableWrapper<Callable>>(std::forward<Callable>(c))) {}

    Ret operator()(Args... args) {
        return (*callable)(std::forward<Args>(args)...);
    }
};

// Sample uses:

void freeFunction(int x) {
    std::cout << "Free function called with: " << x << std::endl;
}

struct Functor {
    void operator()(int x) {
        std::cout << "Functor called with: " << x << std::endl;
    }
};

int main() {
    std_function<void(int)> func1 = freeFunction;
    func1(10);

    std_function<void(int)> func2 = [](int x) { 
        std::cout << "Lambda called with: " << x << std::endl; 
    };
    func2(20);

    Functor functor;
    std_function<void(int)> func3 = functor;
    func3(30);

    return 0;
}
