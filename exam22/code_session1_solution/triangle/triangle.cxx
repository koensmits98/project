// Cours Data Processing
// Examen 2023 - session 1 - program 'triangle'

#include <iostream>
#include <iomanip>     // Fix5: missing include for setprecision
#include <cmath>

using namespace std;

int main ()
{
  cout << "Give me the sides a, b, c: " << endl;

  float sideA, sideB, sideC;
  cin >> sideA >> sideB >> sideC;            // Fix1: was <<

  cout << "Got sides: a=" 
       << sideA << ", b=" << sideB << ", c=" << sideC << endl;

  // 
  if (sideA + sideB <= sideC || 
      sideA + sideC <= sideB ||              // Fix2: missing ||
      sideB + sideC <= sideA) 
  {
    cout << "Triangle is not valid" << endl; // Fix3: missing ;
    return 1;
  }

  // Heron's formula: area = √[s(s-a)(s-b)(s-c)]
  float sp = (sideA + sideB + sideC) / 2.;   // Fix4: missing float
  float area = sqrt(sp * (sp - sideA) * (sp - sideB) * (sp - sideC));
  cout << "Triangle area: " << setprecision(4) << area << endl;
}
