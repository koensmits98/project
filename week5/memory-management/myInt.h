// Cours Data Processing
// Start code - memory managemnt - myInt.h

#ifndef MYINT_H
#define MYINT_H

#include <iostream>

class myInt
{
 public:
  // constructors
  myInt(int value) { 
    mValue = value; 
    std::cout << "... constructing int " << mValue << std::endl;
  }

  myInt() { 
    mValue = 0; 
    std::cout << "... constructing int " << mValue << std::endl;
  }

  // destructor
  ~myInt() {
    std::cout << "... destructing int " << mValue << std::endl;
  }

  // operators

  myInt& operator=(const myInt& rhs) {
    mValue = rhs.mValue;
    return *this;
  } 

  myInt& operator=(const int& rhs) {
    mValue = rhs;
    return *this;
  }

  myInt& operator++() {
    ++mValue;
    return *this;
  } 

  int getValue() const { return mValue; }

 private:
  int mValue;
};

std::ostream& operator << (std::ostream& stream, const myInt& rhs)
{
  stream << rhs.getValue();
  return stream;
}

#endif