#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector <int> r;

        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            r.push_back(x);
        }

        int u = 0;
        int d = 0;

        for (int j = 0; j < n; j++) {
            if (r[j] == 1) {
                u++;
            } else if (r[j] == 2) {
                d++;
            } else if (r[j] == 3) {
                if (u >= 0) {
                    r[j] = 1;
                    u++;
                } else {
                    r[j] = 2;
                    d--;
                }
            }
        }

        if (u > 0) {
            cout << u << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}