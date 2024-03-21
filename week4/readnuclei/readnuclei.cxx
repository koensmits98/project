// Cours Data Processing
// Start code - readNuclei.cxx

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// 'readNuclei' main function
int main()
{
  string filename = "nuclei_small_0.txt";
  ifstream myFile (filename);
  if (! myFile.is_open ()) {
    cerr << "Cannot open file " << filename << endl;
    return 1;
  }

  // Add printing a message that myFile was open successfully
  cout << "File was open successfully." << endl;

//   // Read two lines with comments
//   string commentLine;
//   getline(myFile, commentLine);
//   getline(myFile, commentLine);

//   while ( ! myFile.eof() ) {
//     // Define variables to hold data
//     string name;
//     double bindingEnergy;

  
//     // Read data of one line
//     myFile >> name >> bindingEnergy;
  
//     // Control printing
//     cout << "Read: " << name << " " << bindingEnergy << endl;
//   }
    string filename2 = "nuclei_small.txt";
    ifstream myFile2(filename2);

    if (! myFile2.is_open()){
    cerr << "Cannot open file " << filename << endl;
    return 1;
    }
    
    string commentline2;
    getline(myFile2, commentline2);
    getline(myFile2, commentline2);

  cout << commentline2 << endl;
  while (! myFile2.eof()){


    string a ;

    myFile2 >> a ;
    cout << a << endl;
  }

}