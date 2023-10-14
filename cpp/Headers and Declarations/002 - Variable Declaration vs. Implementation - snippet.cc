Sure, here is a code snippet demonstrating the subtopic "Variable Declaration vs. Implementation" in C++.

#include <iostream>

// Variable declaration
extern int a, b;
extern int c;
extern float f;

int main () {
  // Variable definition:
  int a, b;
  int c;
  float f;

  // actual initialization
  a = 10;
  b = 20;
  c = a + b;

  std::cout << c << std::endl; // This will print 30

  f = 70.0/3.0;
  std::cout << f << std::endl; // This will print 23.3333

  return 0;
}