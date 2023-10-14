#include <iostream>

int main() {
    // Initialize a counter variable
    int counter = 0;

    // A do-while loop will execute the code block at least once, 
    // and then continue executing it while the condition remains true.
    do {
        std::cout << "Counter: " << counter << std::endl; // This will print the current value of counter
        counter++; // Increment the counter
    } while (counter < 5); // The condition for the loop to continue

    // The loop will stop once the counter is no longer less than 5

    // Now, let's demonstrate a do-while loop where the condition is initially false
    do {
        std::cout << "This line will not be printed." << std::endl; // This line will not be printed
    } while (false); // The condition is false, so the loop will not continue

    return 0;
}