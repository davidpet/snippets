#include <gtest/gtest.h>

class MyTestSuite : public ::testing::Test {
protected:
    // This function runs only once before any TEST_F or TEST_P for this suite
    static void SetUpTestSuite() {
        std::cout << "SetUpTestSuite\n";
    }

    // This function runs only once after all TEST_F or TEST_P for this suite
    static void TearDownTestSuite() {
        std::cout << "TearDownTestSuite\n";
    }

    // This function runs before each TEST_F
    void SetUp() override {
        std::cout << "SetUp\n";
    }

    // This function runs after each TEST_F
    void TearDown() override {
        std::cout << "TearDown\n";
    }
};

TEST_F(MyTestSuite, Test1) {
    std::cout << "Test1\n";
    // This will print "SetUp", "Test1", "TearDown"
}

TEST_F(MyTestSuite, Test2) {
    std::cout << "Test2\n";
    // This will print "SetUp", "Test2", "TearDown"
}