// Cours Data Processing
// Start code - functions - pass_by_value.cxx

#include <iostream>

using namespace std;

// Function prototype
int inc (int number);

// Test Driver
int main () {
  int n = 8;

  cout << "Before calling function, n is " << n << endl;
  int result = inc (n);
  cout << "After calling function, n is "  << n << endl;
  cout << "result is " << result << endl;
}

// Function definition
// Return number+1
int inc (int number) {
  ++number;  // Modify parameter, no effect to caller
  return number;
}
