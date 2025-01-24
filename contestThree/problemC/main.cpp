#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    vector <char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector <int> freq(26, 0);

    int n;
    cin >> n;
    
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        freq[tolower(s[i]) - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] == 0) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}