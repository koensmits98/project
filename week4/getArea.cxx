// Cours Data Processing
// Start code - getArea.cxx

#include <iostream>
using namespace std;
const double PI = 3.14159265;

// Function Prototype (Function Declaration)
double getArea(double radius);
double getRectangleArea(double a, double b);
bool biggerthan10(double x);

// 'testFunction’ program
int main() 
{
 double radius1 = 1.1;

 // call function getArea()
 double area1 = getArea(radius1);
 cout << "area 1 is " << area1 << endl;

 // call function getArea()
 double area2 = getArea(2.2);
 cout << "area 2 is " << area2 << endl;

 // call function getArea()
 cout << "area 3 is " << getArea(3.3) << endl;

 cout << "rectangle area: " << getRectangleArea(2,3) << endl;

 cout << false << endl;

}

// Function Definition
// Return the area of a circle given its radius
double getArea(double radius) {
 return radius * radius * PI;
}

double getRectangleArea(double a, double b) {
    return a * b ;
}