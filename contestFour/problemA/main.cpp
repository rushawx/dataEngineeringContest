#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long m;
        cin >> m;
        if (m % 2050 == 0) {
            long long result = m / 2050;
            int count = 0;
            while (result > 0) {
                count += result % 10;
                result /= 10;
            }
            cout << count << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}