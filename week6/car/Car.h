// Cours Data Processing
// Class Car definition

#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car
{
  public:
    // Constructor
    Car(2010, 500);

    // Modifiers (setters)
    void drive(float numberOfMiles);

    // Accessors (getters)
    int getYearOfManufacture() const;
    int getMileage() const;

  private:
    // Data members
    int   yearOfManufacture;
    float mileage;
};

std::ostream& operator << (std::ostream& stream, const Car& car);

#endif
