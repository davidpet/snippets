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
