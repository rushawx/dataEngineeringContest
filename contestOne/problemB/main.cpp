#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int l = s.length();

        if (l > 10) {
            cout << s[0] << l - 2 << s[l - 1] << endl;
        } else {
            cout << s << endl;
        }   
    }
}