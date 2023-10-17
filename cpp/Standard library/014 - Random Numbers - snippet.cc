#include <iostream>
#include <random>

int main() {
    std::random_device rd;

    // Use default random engine
    std::default_random_engine engine(rd());

    // Generate random integers between 1 and 6 (inclusive)
    std::uniform_int_distribution<int> intDist(1, 6);
    std::cout << "Random Integer: " << intDist(engine) << "\n";

    // Generate random floats between 0.0 and 1.0
    std::uniform_real_distribution<float> floatDist(0.0f, 1.0f);
    std::cout << "Random Float: " << floatDist(engine) << "\n";

    return 0;
}
