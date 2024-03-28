// Cours Data Processing
// Class Nucleus definition

#ifndef NUCLEUS_H
#define NUCLEUS_H

#include <string>
#include <iostream>
// Description of a nucleus
//
// A nucleus is defined:
//  - by the name of the corresponding chemical element
//  - the integer number of its proton (Z)
//  - the integer number of its total nucleon (A)
//  - its half-life (if unstable) as a double (in years)
//  - and more characteristics

class Nucleus
{
  public:
    // Constructor
    Nucleus();
      // Creates "Undefined" nucleus object

    // Modifiers (setters)
    void setName(std::string name);
    void setZ(int z);
    void setA(int a);
    void setHalflife(double value);
    void setHalflife(std::string value);
           // set half-life as a string, the 'inf' values will be converted
           // in std::numeric_limits<double>::max()
    void setBindingEnergy(double value);    

    // Accessors (getters)
    std::string getName();
    int getZ();
    int getA();
    double getHalflife();
             // return half-life in s
    double getLogHalflife();
             // return log10 of half-life in years and apply
             // lower and upper limits to -15 and +15
    double getBindingEnergy();    

  private:
    std::string mName;             // Name of the chemical element
    int         mZ;                // Z number, alias Z
    int         mA;                // A number, alias A
    double      mHalflife;         // Half-life [s]
    double      mBindingEnergy;    // Binding energy [keV]
};

std::ostream& operator << (std::ostream& stream, Nucleus& isotope);

#endif
