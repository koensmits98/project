// Cours Data Processing
// Examen 2023 - session 1 - program 'findDate'

#include "Date.h"

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int getInterval(const Date& date1, const Date& date2)
{
  return abs(date1.getDaysFromZero() - date2.getDaysFromZero());
}

// Get the given vector of dates (defined as objects of class Date)
// add the code to find the date closest to today’s date.
// Print the date found and its position in the vector.

int main()
{
  // The vector of dates 
  vector<Date> dates = {
    Date(28, 11, 1918), Date(21, 8, 1968), Date(17, 11, 1989),
    Date(1, 9, 2038), Date(1, 9, 2088), Date(1, 9, 2008),
    Date(1, 9, 2020), Date(1, 4, 2023), Date(4, 4, 2023),
    Date(17, 11, 1989), Date(1, 9, 1938), Date(1, 9, 1988),
    Date(1, 9, 2008), Date(1, 9, 2020), Date(28, 11, 2018),
    Date(21, 8, 2068), Date(17, 11, 2042), Date(17, 11, 2089)
  };

  // Loop over the dates:
  for (auto date : dates) {
    cout << date << endl;
  }

  // Add the code to find the date closest to today’s date and
  // let it print the date found
  Date today(3, 4, 2023);
  Date foundDate = dates[0];
  int minInterval = getInterval(dates.at(0), today);
  for (auto date : dates) {
    auto interval = getInterval(date, today);
    if (interval < minInterval) {
      minInterval = interval;
      foundDate = date;
    }
  }

  cout << "Found date: " << foundDate << endl;
  cout << " is by " << minInterval << " days closest to todays : "
       << today << endl;
}
