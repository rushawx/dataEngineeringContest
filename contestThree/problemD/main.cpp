#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        vector <string> substr;

        for (int j = 0; j < s.size(); j += 2) {
            substr.push_back(s.substr(j, j + 2));
        }

        string source;

        for (int j = 0; j < substr.size(); j++) {
            string temp = substr[j];
            if (j == 0) {
                source += temp;
            } else {
                source += temp[1];
            }
        }

        cout << source << "\n";
    }
}