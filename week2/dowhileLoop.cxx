#include <iostream>

using namespace std;

int main()
{
    int nummer = 0;
    int i = 0;
    int limit = 5;
    do {
        
        cout << "geef nummer" << endl;
        cin >> nummer;
        cout << "nee ik wil een nummer hoger dan 10" << endl;
        
        ++i;
        
        if (i > 5) {
            cout << "laat ook maar" << endl; 
            break;
        }
        if (i < 2) {
            cout << "eerste i " << i <<endl;
            } else continue;
    } while(nummer < 10);
}