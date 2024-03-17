// Cours Data Processing
// Start code - palindrome.cxx

#include <string>
#include <iostream>

using namespace std;

int main () {
  string input;

  cout << "Input a string, please:";
  getline(cin, input);

  if (input.empty ()) {
    cout << "Empty string is NOT a palindrome." << endl;
    return 1;
  }

  // Print the string read in character by character
  for (int i=0; i<input.length(); ++i) {
    cout << input[i];
  }
  cout << endl;

  // Check whether the input string is a word palindrome.
  // A word or group of words that is the same when you read it forwards
  // from the beginning or backwards from the end.
  bool isPalindrome = true;

  int i = 0;                 // first characters
  int j = input.length () - 1; // last character

  while (i < j)
  {
    if (input[i] != input[j]) {
      isPalindrome = false;
      break;
    }
    i++;
    j--;
  }
  
  if (isPalindrome) {
    cout << "is a palindrome." << endl;
  }
  else {
    cout << "is NOT a palindrome." << endl;
  }
}