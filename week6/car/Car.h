// Cours Data Processing
// Class Car definition

#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car
{
  public:
    // Constructor
    Car(int year, int miles);   
    Car();

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
