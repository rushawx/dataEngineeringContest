#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long x, y;
        cin >> x >> y;

        int operations = 0;

        while (y >= x) {
            long long p = 1;
            while (y >= x * p * 10) {
                p *= 10;
            }
            y -= x * p;
            operations++;
        }

        operations += y;

        cout << operations << "\n";
    }

    return 0;
}