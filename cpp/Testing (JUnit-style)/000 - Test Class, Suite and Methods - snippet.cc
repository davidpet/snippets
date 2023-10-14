C++ does not have a built-in testing framework like JUnit in Java. However, there are several third-party libraries available for unit testing in C++. One of the most popular ones is Google Test. Here is an example of how to write a test suite and test methods using Google Test.

#include <gtest/gtest.h>

// This is the class we are going to test
class MyClass {
public:
    int add(int a, int b) {
        return a + b;
    }
};

// This is our test suite for MyClass
class MyClassTest : public ::testing::Test {
protected:
    MyClass myClass; // an instance of MyClass to be used in the tests
};

// This is a test method
TEST_F(MyClassTest, AddTest) {
    // We expect that add(2, 2) will return 4
    EXPECT_EQ(myClass.add(2, 2), 4);
}

// This is another test method
TEST_F(MyClassTest, AddTestNegative) {
    // We expect that add(-2, -2) will return -4
    EXPECT_EQ(myClass.add(-2, -2), -4);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}