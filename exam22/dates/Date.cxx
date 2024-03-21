// Cours Data Processing
// Examen 2023 - session 1 - Class Date implementation

#include "Date.h"

#include <iomanip>

using namespace std;

//______________________________________________________________________________
Date::Date(int dd, int mm, int yy)
  : mDD(dd), mMM(mm), mYY(yy)
{}

//______________________________________________________________________________
int Date::getDaysFromZero() const
{
  // days for passed years
  int days = (mYY - 1) * 365; 

  // add days for leap-year 
  // (every 4th year)
  days += (mYY - 1) / 4;

  // days for passed months
  days += (mMM - 1) * 30;

  // Add days for months with 31 days
  if (mMM >= 1) { ++days; }    // January 31 days
  if (mMM >= 3) { ++days; }    // March 31 days
  if (mMM >= 5) { ++days; }    // May 31 days
  if (mMM >= 7) { ++days; }    // July 31 days
  if (mMM >= 8) { ++days; }    // August 31 days
  if (mMM >= 10) { ++days; }   // October 31 days

  // Updates days for February (28 days, 29 if leap-year)
  if (mMM >= 2) { 
    days -= 2; 
    // Add 1 day if leap-year
    if (mYY % 4 == 0) ++days;
  } 

  // days in the month
  days += mDD;

  return days;
}

//______________________________________________________________________________
int Date::getDay() const
{
  return mDD;
}

//______________________________________________________________________________
int Date::getMonth() const
{
  return mMM;
}

//______________________________________________________________________________
int Date::getYear() const
{
  return mYY;
}

//______________________________________________________________________________
std::ostream& operator << (std::ostream& stream, const Date& date)
{
  stream << setw(2) << setfill('0')  << date.getDay() << "/" 
         << setw(2) << setfill('0')  << date.getMonth() << "/" 
         << setw(4) << date.getYear();
  return stream;
}
