// Cours Data Processing
// Class Nucleus implementation

#include "Nucleus.h"

#include <iomanip>
#include <limits>
#include <cmath>
#include <sstream>

using namespace std;

//______________________________________________________________________________
Nucleus::Nucleus ()
: mName ("Undefined"), mZ(0),  mA(0), 
  mHalflife(0.), mBindingEnergy(0.)
{}

//______________________________________________________________________________
void Nucleus::setName(string name)
{ mName = name; }

//______________________________________________________________________________
void Nucleus::setZ(int z)
{ mZ = z; }

//______________________________________________________________________________

void Nucleus::setA(int a)
{ mA = a; }

//______________________________________________________________________________
void Nucleus::setHalflife(double value)
{ mHalflife = value; }

//______________________________________________________________________________
void Nucleus::setHalflife(string value)
{
  if (value == "inf") {
    mHalflife = std::numeric_limits<double>::max();
  } else {
    istringstream istream;
    istream.str(value);
    istream >> mHalflife;
  }
}

//______________________________________________________________________________
void Nucleus::setBindingEnergy(double value)
{ mBindingEnergy = value; }

//______________________________________________________________________________
string Nucleus::getName()
{ return mName; }

//______________________________________________________________________________
int Nucleus::getZ()
{ return mZ; }

//______________________________________________________________________________
int Nucleus::getA()
{ return mA; }

//______________________________________________________________________________
double Nucleus::getHalflife()    
{ return mHalflife; }

//______________________________________________________________________________
double Nucleus::getLogHalflife()
{
  double secondInYear = 365.*24.*60.*60.;
  double logHalflife = log10(mHalflife/secondInYear);
  if (logHalflife > 15) {
    logHalflife = 15;
  }
  if (logHalflife < -15) {
    logHalflife = -15;
  }
  return logHalflife;
}

//______________________________________________________________________________
double Nucleus::getBindingEnergy()
{ return mBindingEnergy; }

//______________________________________________________________________________
std::ostream& operator << (std::ostream& output, Nucleus& isotope)
{
  output 
    << "\"" << isotope.getName() << "\": " << endl;
  output << "  Z           " << isotope.getZ() << endl;
  output << "  A           " << isotope.getA() << endl;
  output << setprecision(4) << scientific << "  halflife[s]  "
    << isotope.getHalflife() << endl;
  output << setprecision(4) << scientific << "  bEnergy[keV] "
    << isotope.getBindingEnergy() << endl;
 
  return output;
}
