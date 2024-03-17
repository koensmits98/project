
#include <iostream>
using namespace std;

int main() {
    cout << "Enter a string (press Enter to finish): ";

    char ch;
    int vowelCount = 0;

    // Read characters until Enter is pressed
    while ((ch = cin.get()) != '\n') {
        // Check if the character is a vowel (case-insensitive)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }

    cout << "Number of vowels entered: " << vowelCount << endl;

    return 0;
}