C++ does not have a built-in testing framework like JUnit in Java. However, there are several third-party libraries available for unit testing in C++. One of the most popular is Google Test. 

Google Test does not directly support persistence of class/suite data between tests as JUnit does with @BeforeClass and @AfterClass. However, we can achieve similar functionality by using static variables or singletons. 

Here is a simple example of how you can persist data between tests in Google Test using static variables:

#include <gtest/gtest.h>
#include <iostream>

class TestSuite : public ::testing::Test {
protected:
    static void SetUpTestSuite() {
        std::cout << "Setting up the test suite\n";
        // Initialize our static member
        data = new int(10);
    }

    static void TearDownTestSuite() {
        std::cout << "Tearing down the test suite\n";
        delete data;
        data = nullptr;
    }

    void SetUp() override {
        std::cout << "Setting up a test\n";
    }

    void TearDown() override {
        std::cout << "Tearing down a test\n";
    }

    static int* data;
};

int* TestSuite::data = nullptr;

TEST_F(TestSuite, Test1) {
    std::cout << "Running Test1\n";
    // Use our static member
    std::cout << "Data: " << *data << "\n"; // Expected to print: Data: 10
}

TEST_F(TestSuite, Test2) {
    std::cout << "Running Test2\n";
    // Use our static member
    std::cout << "Data: " << *data << "\n"; // Expected to print: Data: 10
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

In this example, we have a test suite `TestSuite` with a static member `data`. We initialize `data` in `SetUpTestSuite` and clean it up in `TearDownTestSuite`. These methods are called once for the entire test suite, not for each test. Therefore, `data` persists between tests.

We then have two tests, `Test1` and `Test2`, that use `data`. Since `data` is a static member of `TestSuite`, it is the same for both tests.

Please note that this is a simple example and in a real-world scenario, you would need to handle synchronization issues if your tests are running in parallel.