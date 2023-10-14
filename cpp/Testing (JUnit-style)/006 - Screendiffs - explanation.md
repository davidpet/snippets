# Screendiffs
In this code, we first include the necessary headers. We use Google Test for the testing framework and OpenCV for image processing.

We define a function `areImagesEqual` that takes two images as input and returns `true` if they are equal and `false` otherwise. The function first checks if the images have the same size and type. If not, it returns `false`. Then it computes the absolute difference between the two images and reshapes the result into a 1D array. If the number of non-zero elements in this array is zero, it means the images are equal.

In the `TEST` macro, we define a test case `ImageComparison` with a test `SameImages`. We read two images from the disk and check if they are equal using the `areImagesEqual` function. If the images are equal, the test passes. Otherwise, it fails.

Finally, in the `main` function, we initialize Google Test and run all tests.