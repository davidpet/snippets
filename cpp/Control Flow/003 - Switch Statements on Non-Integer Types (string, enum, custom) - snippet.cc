C++ does not support switch statements on non-integer types directly. However, there are ways to achieve similar functionality using other constructs. Here are some examples:

1. Using `std::map` for string types.
2. Using `enum` types directly.
3. Using `std::variant` for custom types.

#include <iostream>
#include <map>
#include <variant>

// 1. Using std::map for string types
void switchWithString(const std::string& str) {
    static const std::map<std::string, int> switchMap = {
        {"case1", 1},
        {"case2", 2},
        {"default", 0}
    };

    switch (switchMap.at(str)) {
        case 1:
            std::cout << "Case 1" << std::endl; // Expected to print "Case 1"
            break;
        case 2:
            std::cout << "Case 2" << std::endl; // Expected to print "Case 2"
            break;
        default:
            std::cout << "Default case" << std::endl; // Expected to print "Default case"
            break;
    }
}

// 2. Using enum types directly
enum class MyEnum {
    Case1,
    Case2
};

void switchWithEnum(MyEnum e) {
    switch (e) {
        case MyEnum::Case1:
            std::cout << "Enum Case 1" << std::endl; // Expected to print "Enum Case 1"
            break;
        case MyEnum::Case2:
            std::cout << "Enum Case 2" << std::endl; // Expected to print "Enum Case 2"
            break;
        default:
            std::cout << "Enum Default case" << std::endl; // Expected to print "Enum Default case"
            break;
    }
}

// 3. Using std::variant for custom types
struct CustomType1 {};
struct CustomType2 {};

using MyVariant = std::variant<CustomType1, CustomType2>;

void switchWithVariant(const MyVariant& v) {
    std::visit([](auto&& arg) {
        using T = std::decay_t<decltype(arg)>;
        if constexpr (std::is_same_v<T, CustomType1>) {
            std::cout << "Custom Type 1" << std::endl; // Expected to print "Custom Type 1"
        } else if constexpr (std::is_same_v<T, CustomType2>) {
            std::cout << "Custom Type 2" << std::endl; // Expected to print "Custom Type 2"
        } else {
            std::cout << "Unknown Type" << std::endl; // Expected to print "Unknown Type"
        }
    }, v);
}

int main() {
    switchWithString("case1");
    switchWithEnum(MyEnum::Case2);
    CustomType1 ct1;
    switchWithVariant(ct1);
    return 0;
}