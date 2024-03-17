#include<iostream>

using namespace std;



int main() {
    string phrase;
    cout << 'type a sentence' << endl;
    get(cin, phrase);

    cout << phrase.length() << endl;
    cout << phrase << endl ;
}