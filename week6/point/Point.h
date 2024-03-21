// Cours Data Processing
// Class Point definition

#ifndef POINT_H
#define POINT_H

#include <iostream>

// This utility class allows to handle the points defined by two
// coordinates x and y
class Point
{
  public:
    // Constructors
    Point();

    // Modifiers (setters)
    void setX(int x);
    void setY(int y);

    // Accessors (getters)
    int getX() const;
    int getY() const;

    // Compute a distance from the center (0,0)
    double distance() const;

  private:
    // Data members
    int mX;  // the coordinate x
    int mY;  // the coordinate y
};

std::ostream& operator << (std::ostream& stream, const Point& point);

#endif
