#include <iostream>

using namespace std;

int main() {
    // Declare variables to store user input and the square of the number
    int number;
    int square;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Calculate the square of the number
    square = number * number;

    // Print the square of the number
    cout << "The square of " << number << " is: " << square << endl;

    return 0;
}