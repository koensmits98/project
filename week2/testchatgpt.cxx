#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout << "Enter two numbers separated by a comma: ";
    getline(cin, input);

    int x, y;
    char comma;
    istringstream iss(input);

    if (iss >> x >> comma >> y && comma == ',') {
        cout << "You entered: x = " << x << ", y = " << y << endl;
    } else {
        cout << "Invalid input format." << endl;
    }

    return 0;
}
