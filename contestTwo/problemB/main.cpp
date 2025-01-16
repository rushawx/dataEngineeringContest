#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (i == 0) {
            cout << (char)toupper(s[i]);
        } else {
            cout << s[i];
        }
    }
}