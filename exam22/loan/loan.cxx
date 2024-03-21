// Cours Data Processing
// Examen 2023 - session 1 - program 'loan'

#include <iostream>
#include <cmath>

using namespace std;

// When asking for a mortgage loan at a bank, you need to know
//    — what amount of money you want to borrrow: 'loanPrincipal'
//    — what amount of money you will repay each month: 'monthlyPayment'
//    — over what period you will repay you loan: 'durationInMonths'
//    — what rate of interest is charged upon you by the bank: 'rate'
// as interests are charged each month,
// the monthly interest rate is defined as 1/12th of the yearly interest rate

// All these four variables are related together, so we can compute each one
// as function of the three others.

// We would like to know how the monthly payement will depend on the yearly
// rate for the total amount of money borrowed 150000 for 15 years
// and what will be cost of the loan.
//
// We provide you with the formulae to be implemented in the 'getMonthlyPayment'
// function:
// - the monthly payment is the product of the loan principal by the monthly rate
//   divided by
//      (1 − (1 + rate)⁻ⁿ)
//   where 'rate' is the monthly rate and 'n' is the number of months.
//
//  Hint: the math library function pow(x, n) computes the n-th power of the x argument
//
//  Assignment 1: (in function getMonthlyPayment) return the monthly payment computed
//                accordingly to the formula
//  Assignment 2: compile, execute and report the results in a file
//
//  Note: you don't need to change the main program for the assignemnts 1 and 2.
//
//  Assignment 3: improve the program output and add printing of a line with the description
//  of the printed computed values.

double getMonthlyPayment (double principal, double rate, int durationInMonths)
{
//  Assignment 1: return the monthly payment computed accordingly to the first formula
//                (instead of 0.)  

  return 0.;
}


double getTotalPaidInterest (double principal, double rate, double monthlyPayment, 
                             int durationInMonths)
{
  return (principal + monthlyPayment / rate) * (1 - pow (1 + rate, - durationInMonths)) -
          durationInMonths * monthlyPayment;
}

int main ()
{
  const double loanPrincipal = 150000;       // amount of money borrowed, in euro
  const unsigned int durationInMonths = 12 * 15; // duration of 15 years, in month

  cout << loanPrincipal << '\t' << durationInMonths << '\n';

  // Assignment 3: add printing of a line with the description of the printed computed 
  // values

  for (unsigned int i = 0; i < 11; ++i) // loop over yearly rates between 0.7% and 1.2%
  {
     double yearlyRate = i * 0.5e-3 + 0.007;
     double monthlyRate = yearlyRate / 12;
     double monthlyPayment =
       getMonthlyPayment (loanPrincipal, monthlyRate, durationInMonths);
     double totalPaidInterest =
       getTotalPaidInterest (loanPrincipal, monthlyRate, monthlyPayment, durationInMonths);

     cout
       << i << '\t'
       << yearlyRate << '\t'
       << monthlyPayment << '\t'
       << totalPaidInterest << endl;
  }
}
