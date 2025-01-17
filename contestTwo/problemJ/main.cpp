#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string word;
    cin >> word;

    int lowerCount = 0;
    int upperCount = 0;

    for (char c: word) {
        if (islower(c)) {
            lowerCount++;
        } else {
            upperCount++;
        }
    }

    if (upperCount > lowerCount) {
        for (char c: word) {
            cout << (char)toupper(c);
        }
    } else {
        for (char c: word) {
            cout << (char)tolower(c);
        }
    }
}