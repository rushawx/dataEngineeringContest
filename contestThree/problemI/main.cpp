#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cout << s[n - 1];
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}