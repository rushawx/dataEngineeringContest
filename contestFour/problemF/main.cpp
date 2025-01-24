#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int a = 10000;

    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;

        int n = 1;
        int c = 1;
        string s = to_string(n);
        int count = 1;
        int index = 1;

        while (x != n) {
            s += to_string(c);
            index += 1;
            n = stoi(s);
            if (n < a) {
                count += index;
            } else {
                c += 1;
                s = to_string(c);
                index = 1;
                count += index;
                n = stoi(s);
            }
        }

        cout << count << "\n";
    }
}