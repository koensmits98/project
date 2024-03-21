// Cours Data Processing
// Start code - memory managemnt - dynamic.cxx

#include <iostream>

using namespace std;

int main()
{
 int* dynamicVar = nullptr;
 {
   dynamicVar = new int(88);
   cout << *dynamicVar << endl;
 }

 cout << *dynamicVar << endl;
   // 'dynamicVar' is still available

 // delete dynamicVar;
   // if delete  is ommitted the memory is not freed
}
