// Include necessary libraries
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

int main() {
    // Load an image from file - change this based on your image path
    cv::Mat img = cv::imread("path_to_your_image.jpg", cv::IMREAD_COLOR);

    // Check if image is loaded fine
    if(img.empty()) {
        printf("Error loading image\n");
        return -1; // Return error code
    }

    // Convert the image to grayscale
    cv::Mat img_gray;
    cv::cvtColor(img, img_gray, cv::COLOR_BGR2GRAY);

    // Display the original image
    cv::namedWindow("Original Image", cv::WINDOW_NORMAL);
    cv::imshow("Original Image", img);

    // Display the grayscale image
    cv::namedWindow("Grayscale Image", cv::WINDOW_NORMAL);
    cv::imshow("Grayscale Image", img_gray);

    // Wait for a keystroke in the window
    cv::waitKey(0);

    return 0;
}
