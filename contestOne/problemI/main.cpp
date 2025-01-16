#include <iostream>

using namespace std;

int main() {
    string aString;
    cin >> aString;

    string bString;
    cin >> bString;

    for (int i = 0; i < aString.length(); i++) {
        char a = tolower(aString[i]);
        char b = tolower(bString[i]);
        if (a < b) {
            cout << -1 << endl;
            return 0;
        } else if (a > b) {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;
}