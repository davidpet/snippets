# Shuffling
In this code snippet, we first initialize a vector with integers from 1 to 10. We then print the original vector. After that, we shuffle the vector using the `std::shuffle` function from the `<algorithm>` library. The `std::shuffle` function takes three arguments: the beginning iterator of the range to be shuffled, the ending iterator, and a random number generator. In this case, we use a Mersenne Twister engine (`std::mt19937`) seeded with a random device (`std::random_device`). After shuffling, we print the shuffled vector.

Note that the `std::shuffle` function was introduced in C++11 and is used to rearrange the elements in a range into a randomly ordered sequence. The order of the sequence is determined by the random number generator.

Also, keep in mind that the output of the shuffled vector will be different each time you run the program due to the random nature of the shuffle operation.