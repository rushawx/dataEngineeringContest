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
        int x;
        cin >> n >> x;

        vector <int> w(n);
        for (int i = 0; i < n; i++) {
            cin >> w[i];
        }

        bool exploded = false;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += w[i];
            if (sum == x) {
                if (i == n - 1) {
                    cout << "NO" << "\n";
                    exploded = true;
                } else {
                    sum -= w[i];
                    swap(w[i], w[n - 1]);
                    sum += w[i];
                }
            }
        }

        if (exploded) {
            continue;
        }
        cout << "YES" << "\n";
        for (int i = 0; i < n; i++) {
            cout << w[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}