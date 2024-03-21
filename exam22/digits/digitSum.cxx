// Cours Data Processing
// Examen 2023 - session 1 - program 'digitSum'

#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cout << "Please input a stricly positive integer number: ";
    cin >> number;
    int numberCopy = number;

    int counter = 0;
    int sum = 0;

    string numberstr = to_string(number);
    int length = numberstr.length();
    
    for (char digit : numberstr ){

        sum += to_integer(digit);

    }

    // Assignment:
    //     Count the number of digits in number in variable 'counter'
    //     add sum each digit together in variable 'sum',
    //     the results will be displayed at the end.
    //     Compile and run your program with various values
    //        such as 981523 and 17423

        // ...
    // output number of digits and computed sum
     cout << "The chosen number " << numberCopy
      << " has " << counter << " digits. "
      << "They sump up to " << sum << endl;
}
