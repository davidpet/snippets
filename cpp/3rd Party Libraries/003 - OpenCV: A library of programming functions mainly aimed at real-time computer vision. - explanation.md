# OpenCV: A library of programming functions mainly aimed at real-time computer vision.
This code demonstrates the basic usage of the OpenCV library in C++. It includes the necessary OpenCV headers, then in the main function, it reads an image from a file using `cv::imread()`. The image is then converted to grayscale using `cv::cvtColor()`. The original and grayscale images are displayed using `cv::imshow()`. The program waits for a keystroke before closing the display windows and ending.

Please note that you need to replace "path_to_your_image.jpg" with the actual path to the image file you want to process. If the image file is not found or cannot be read, the program will print an error message and return an error code.

The `cv::namedWindow()` function is used to create a window that can display an image. The window will be automatically resized to fit the displayed image (`cv::WINDOW_NORMAL`).

The `cv::waitKey(0)` function waits for a keyboard event for an infinite amount of time (until the user presses a key). This is necessary to keep the image windows open.

Remember to link the OpenCV libraries when compiling this code. The exact command depends on your development environment and how you installed OpenCV. For example, if you're using g++, you might use a command like `g++ -o outputfile inputfile.cpp `pkg-config --cflags --libs opencv``.