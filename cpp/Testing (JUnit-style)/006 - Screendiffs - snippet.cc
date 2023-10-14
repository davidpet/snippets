C++ does not have a built-in testing framework like JUnit in Java. However, there are several third-party libraries available for unit testing in C++. One of the most popular ones is Google Test. 

For the subtopic "Screendiffs", it's not directly related to C++ or unit testing. Screendiffs are typically used in UI testing to compare the current state of a UI with a previously captured screenshot. This is more relevant to web or mobile application testing, not C++ unit testing. 

However, if you want to compare two images in a C++ test, you can use OpenCV library. Here is a simple example of how you can compare two images using OpenCV and Google Test:

#include <gtest/gtest.h>
#include <opencv2/opencv.hpp>

// Function to compare two images
bool areImagesEqual(const cv::Mat& img1, const cv::Mat& img2) {
    // Check if the images have the same size and type
    if (img1.size() != img2.size() || img1.type() != img2.type()) {
        return false;
    }

    // Compute the difference
    cv::Mat diff;
    cv::absdiff(img1, img2, diff);

    // Check if the images are equal
    return cv::countNonZero(diff.reshape(1)) == 0;
}

TEST(ImageComparison, SameImages) {
    cv::Mat img1 = cv::imread("image1.png");
    cv::Mat img2 = cv::imread("image2.png");

    EXPECT_TRUE(areImagesEqual(img1, img2));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}