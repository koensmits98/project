// Cours Data Processing
// Solution: program to test the Point class

#include "Point.h"
#include <iostream>

using namespace std;

int main ()
{
  // Create a point object
  Point point;

  // Print the point on the screen (using '<<' operator)
  cout << "My point: " << point << endl;

  // Change the point coordinates (using its 'set' member functions)
  point.setX(5.);
  point.setY(6.);

  // Print the modified point on the screen
  cout << "My modified point: " << point << endl;

  // Use the Point class function distance() to print a distance
  // of the point from the center of coordinates
  cout << "Distance from center: " << point.distance() << endl;
}