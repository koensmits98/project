// Cours Data Processing
// Start code - memory managemnt - auto.cxx

#include <iostream>
#include "myInt.h"

using namespace std;

int main()
{
  myInt localVar = 8;
 
  // localVar's scope begins after declaration
  {
    localVar = 88;
    myInt blockVar = 99;
    // blockVar's scope begins
    cout << blockVar << endl;
  }
 
  // cout << blockVar << endl;
    // Error: use of undeclared identifier 'blockVar'
    // blockVar's scope ends and deallocated
    // when execution leaves the block
  cout << localVar << endl;
}
