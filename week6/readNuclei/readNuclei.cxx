// Cours Data Processing
// Start code - readNuclei.cxx

#include <iostream>
#include <fstream>
#include <string>

#include "Nucleus.h"

using namespace std;

// 'readNuclei' main function
int main()
{
  string filename = "nuclei.txt";
  ifstream myFile (filename);
  if (! myFile.is_open ()) {
    cerr << "Cannot open file " << filename << endl;
    return 1;
  }

  // Add printing a message that myFile was open successfully
  cout << "File was open successfully." << endl;

  // Read two lines with comments
  string commentLine;
  getline(myFile, commentLine);
  getline(myFile, commentLine);


  vector<Nucleus> nuclei ;

  int counter = 0;
  while ( ! myFile.eof() ) {
    // Define variables to hold data
    int a;
    int z;
    string name;
    string halfLife;
    double bindingEnergy;
  
    // Read data of one line
    myFile >> a >> z >> name >> halfLife >> bindingEnergy;
  
    Nucleus nucleus ;
    nucleus.setName(name);
    nucleus.setZ(z);
    nucleus.setA(a);
    nucleus.setHalflife(halfLife);
    nucleus.setBindingEnergy(bindingEnergy);

    // cout << "Read:  " << nucleus ;

    nuclei.push_back(nucleus);
    // Control printing
    // cout << "Read: " << a << " " << z << " " << name << " " << halfLife << " " << bindingEnergy << endl;

    ++counter;
  }

  cout << "Read " << counter << " nuclei." << endl;


cout << "nuclei stored in a vector 5: " << nuclei[5] << endl;

// for (Nucleus nucleus : nuclei) {
//   cout << nucleus << endl;
// }



// string filename = 'nuclei.txt' ;
// ifstream myFile(filename) ;

// string commentline ;
// getline(myFile, commentLine);
// getline(myFile, commentLine);

// Nucleus nucleus ;



}
