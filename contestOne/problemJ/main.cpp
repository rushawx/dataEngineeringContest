#include <set>
#include <iostream>

using namespace std;

int main() {
    set <char> vowels = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (vowels.find(s[i]) == vowels.end()) {
            cout << ".";
            cout << char(tolower(s[i]));
        }
    }

    cout << endl;
}