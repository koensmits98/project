// Cours Data Processing
// Examen 2023 - session 1 - Class Date definition

#ifndef DATE_H
#define DATE_H

#include <iostream>

// This utility class allows to handle the dates dates defined by
// set of day, month and year values
class Date
{
  public:
    // Constructors
    Date(int dd, int mm, int yy);
    Date() {}

    // Return total number of days from 00/00/0000.
    int getDaysFromZero() const;

    // Accessors (getters)
    int getDay() const;
    int getMonth() const;
    int getYear() const;

  private:
    // Data members
    int mDD = 0; // the day
    int mMM = 0; // the month
    int mYY = 0; // the year
};

std::ostream& operator << (std::ostream& stream, const Date& date);

#endif
