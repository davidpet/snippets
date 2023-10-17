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
