// Cours Data Processing
// Program to test the Car class

#include "Car.h"

#include <iostream>

using namespace std;

int main ()
{
  // Create a car object
  Car car;

  // Print the car on the screen (using '<<' operator)
  cout << "My car: " << car << endl;

  // Drive the car for 20 miles (change the mileage)
  car.drive(20.);

  // Print the car again
  cout << "My car: " << car << endl;

  // Drive the car for 30 miles (change the mileage)
  car.drive(30.);

  // Print the car again
  cout << "My car: " << car << endl;
}
