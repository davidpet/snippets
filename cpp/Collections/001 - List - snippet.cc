#include <iostream>
#include <list>

int main() {
    // 1. Declaring a list of integers
    std::list<int> myList;

    // 2. Adding elements to the list using push_back
    myList.push_back(10); // Adds 10 to the end of the list
    myList.push_back(20); // Adds 20 to the end of the list
    myList.push_back(30); // Adds 30 to the end of the list

    // Printing the list
    for (int num : myList) {
        std::cout << num << " "; // Expected output: 10 20 30
    }
    std::cout << std::endl;

    // 3. Adding elements to the list using push_front
    myList.push_front(0); // Adds 0 to the beginning of the list

    // Printing the list
    for (int num : myList) {
        std::cout << num << " "; // Expected output: 0 10 20 30
    }
    std::cout << std::endl;

    // 4. Removing elements from the list using pop_back
    myList.pop_back(); // Removes the last element (30)

    // Printing the list
    for (int num : myList) {
        std::cout << num << " "; // Expected output: 0 10 20
    }
    std::cout << std::endl;

    // 5. Removing elements from the list using pop_front
    myList.pop_front(); // Removes the first element (0)

    // Printing the list
    for (int num : myList) {
        std::cout << num << " "; // Expected output: 10 20
    }
    std::cout << std::endl;

    // 6. Inserting elements at a specific position
    std::list<int>::iterator it = myList.begin();
    advance(it, 1); // Moving the iterator to the second position
    myList.insert(it, 15); // Inserting 15 at the second position

    // Printing the list
    for (int num : myList) {
        std::cout << num << " "; // Expected output: 10 15 20
    }
    std::cout << std::endl;

    // 7. Removing elements at a specific position
    it = myList.begin();
    advance(it, 1); // Moving the iterator to the second position
    myList.erase(it); // Removing the element at the second position

    // Printing the list
    for (int num : myList) {
        std::cout << num << " "; // Expected output: 10 20
    }
    std::cout << std::endl;

    return 0;
}
