#include <iostream>
#include <vector>

using namespace std;

bool isPossible(const string& s, int k) {
    for (int i = 0; i < k; i++) {
        if (s[i] != s[s.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if (isPossible(s, k) && 2 * k < n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}