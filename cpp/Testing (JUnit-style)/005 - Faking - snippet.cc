#include "gmock/gmock.h"
#include "gtest/gtest.h"

// This is the class we want to fake.
class MyClass {
public:
    virtual ~MyClass() {}
    virtual int MyMethod(int a) = 0;
};

// This is the fake class.
class FakeMyClass : public MyClass {
public:
    MOCK_METHOD(int, MyMethod, (int a), (override));
};

// This is the test.
TEST(MyClassTest, MyMethodTest) {
    FakeMyClass fake;
    EXPECT_CALL(fake, MyMethod(5)).Times(1).WillOnce(testing::Return(10));

    // This is where we use the fake.
    int result = fake.MyMethod(5);

    EXPECT_EQ(result, 10); // This should print: "Expected: 10, Actual: 10"
}
