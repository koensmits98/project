// Cours Data Processing
// Start code - functions - overloading.cxx

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Assignment 2a:
// overload the exponentiation function to define a float version 
// (use the model of the double version)
double exponentiation (double, double);
int    exponentiation (int, int);
void   test (int, int);

// Test of exponentiation for positive exponent
int main ()
{
  test (9, 10);
}

void test (int a, int b) {
  int    resultInt = exponentiation (a, b);

  double aDouble = a; // automatically promotes the integer value to a double value
  double bDouble = b; // automatically promotes the integer value to a double value
  double resultDouble = exponentiation (aDouble, bDouble);

  cout << "----------------------------------------------------------"
       << endl;
  cout << setw (14); // set width of number display
  cout << a << "^" << b << " = " << endl;
  cout << "Integer:   " << resultInt    << endl;
  // Assignment 2c: display the result of the float version in the test
  cout << "Double:    " << resultDouble << endl;

  // Assignment 1: redisplay all the previous results with 12 decimal places
  // Assignment 3: display the maximum limit value of integer INT_MAX defined in 
  // the system header <climits> and explain the origin of the different results.
}

int exponentiation (int base, int exponent) {
  int result = 1;
  while (exponent > 0)
    {
      result *= base;
      exponent-- ;
    }
  return result;
}

double exponentiation (double base, double exponent) {
  return pow (base, exponent);
}

// Assignment 2b:
// overload the exponentiation function to define a float version
// (use the model of the double version)
