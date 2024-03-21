// Cours Data Processing
// Examen 2023 - session 1 - program 'triangle'

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
  cout << "Give me the sides a, b, c: " << endl;

  float sideA, sideB, sideC;
  cin >> sideA >> sideB >> sideC;

  cout << "Got sides: a="
       << sideA << ", b=" << sideB << ", c=" << sideC << endl;

  // 
  if (sideA + sideB <= sideC || 
      sideA + sideC <= sideB  ||
      sideB + sideC <= sideA) 
  {
    cout << "Triangle is not valid" << endl;
    return 1;
  }

  // Heron's formula: area = √[s(s-a)(s-b)(s-c)]
  float sp = (sideA + sideB + sideC) / 2.;
  float area = sqrt(sp * (sp - sideA) * (sp - sideB) * (sp - sideC));
  cout << "Triangle area: " << setprecision(4) << area << endl;
}
