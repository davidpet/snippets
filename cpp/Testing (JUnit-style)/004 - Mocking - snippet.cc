#include "gmock/gmock.h"
#include "gtest/gtest.h"

// This is the interface for the class we want to mock.
class Foo {
public:
    virtual ~Foo() {}
    virtual int Bar(int x, int y) = 0;
};

// This is the mock class.
class MockFoo : public Foo {
public:
    MOCK_METHOD(int, Bar, (int x, int y), (override));
};

TEST(FooTest, Bar) {
    MockFoo foo;

    // Set up the expectation.
    EXPECT_CALL(foo, Bar(5, 10))
        .Times(1)
        .WillOnce(::testing::Return(15));

    // Use the mock object.
    int result = foo.Bar(5, 10);

    // This will print "Result: 15"
    std::cout << "Result: " << result << std::endl;
}
