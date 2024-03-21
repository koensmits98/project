// Cours Data Processing
// Start code - memory managemnt - static.cxx

#include <iostream>
#include "myInt.h"


using namespace std;

void foo()
{
  myInt nofCalls = 0;
     // initialized with the first call
     // and destroyed at the end of the program
   
   ++nofCalls;
     // increment value with each call
   cout << "Calling " << nofCalls << " times" << endl;
}

int main() 
{
  foo();
  foo();
}
