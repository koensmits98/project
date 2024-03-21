// Cours Data Processing
// Class Car implementation

#include "Car.h"

//______________________________________________________________________________
Car::Car()
  : yearOfManufacture(2015),
    mileage(0.)
{}

//______________________________________________________________________________
void Car::drive(float numberOfMiles)
{
  mileage += numberOfMiles;
}

//______________________________________________________________________________
int Car::getYearOfManufacture() const
{
  return yearOfManufacture;
}

//______________________________________________________________________________
int Car::getMileage() const
{
  return mileage;
}

//______________________________________________________________________________
std::ostream& operator << (std::ostream& stream, const Car& car)
{
  stream << "Manufactured in " << car.getYearOfManufacture() 
         << "; mileage " << car.getMileage();
  return stream;
}
