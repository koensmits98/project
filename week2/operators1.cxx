#include <iostream>

using namespace std;

int main()
{
    int n1 = 1;
    ++n1;
    int n2 = n1;
    ++n1;
    int n3 = n1 + 1;
    int n4 = n1;
    ++n1;

    cout << "n1 = " << n1 << endl
         << "n2 = " << n2 << endl
         << "n3 = " << n3 << endl
         << "n4 = " << n4 << endl;
}