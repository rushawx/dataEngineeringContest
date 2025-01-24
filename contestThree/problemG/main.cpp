#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string password;
    cin >> password;

    int n;
    cin >> n;

    vector <string> words;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        words.push_back(word);
    }

    for (int i = 0; i < n; i++) {
        string word = words[i];

        if (word == password) {
            cout << "YES\n";
            return 0;
        }

        if (word[0] == password[1]) {
            for (int j = 0; j < n; j++) {
                if (words[j][1] == password[0]) {
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }

    cout << "NO\n";
}