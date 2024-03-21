// Cours Data Processing
// Class Point implementation

#include "Point.h"

#include <cmath>

//______________________________________________________________________________
Point::Point()
  : mX(0),
    mY(0)
{}

//______________________________________________________________________________
void Point::setX(int x)
{
  mX = x;
}

//______________________________________________________________________________
void Point::setY(int y)
{
  mY = y;
}

//______________________________________________________________________________
int Point::getX() const
{
  return mX;
}

//______________________________________________________________________________
int Point::getY() const
{
  return mY;
}

//______________________________________________________________________________
double Point::distance() const
{
  return std::sqrt(mX*mX + mY*mY);
}

//______________________________________________________________________________
std::ostream& operator << (std::ostream& stream, const Point& point)
{
  stream << point.getX() << "  " << point.getY();
  return stream;
}
