// Cours Data Processing
// Start code - values.cxx

#include<iostream>
#include<vector>

using namespace std;

int main ()
{
  vector<double> myValues =
    { -7.19868, -3.03736,  7.06005,  0.99885,  5.91401,
      -0.73840, -5.52073,  8.35327, -9.30214, -4.44040,
      -0.62139,  6.36694, -0.51389, -5.46185, -2.14391,
       4.82466,  1.92449, -4.30279,  1.67377, -4.03894 };

  // Control printing
  cout << myValues[0] << endl;

  double min = myValues[0];
  double max = myValues[0];

  for (int i = 0; i < myValues.size(); ++i) {
    if (myValues[i] < min){
      min = myValues[i];
    }
    if (myValues[i] > max) {
      max = myValues[i];
    } 
  }
  cout << "minimum: "<<  min << "maximum: " << max << endl;

for (auto value : myValues)
{
  if (value > max){
  max = value;
  }
  if (value < min) {
  min = value;
  }


}
cout << min << max << endl;

}


