#include <iostream>
#include <string>
#include <random>
#include <algorithm>

using namespace std;

int isPalindrome(string s) {
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

string permutate(string s) {
    sort(s.begin(), s.end());

    if (isPalindrome(s) && s.front() == s.back()) {
        return "-1";
    }

    do {
        next_permutation(s.begin(), s.end());
    } while (isPalindrome(s) && next_permutation(s.begin(), s.end()));

    return s;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (isPalindrome(s)) {
            s = permutate(s);
        }

        if (s == "-1") {
            cout << -1 << "\n";
            continue;
        }
        cout << s << "\n";
    }
}