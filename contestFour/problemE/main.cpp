#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> c;
        for (int j = 4 * n; j > 0; j--) {
            c.push_back(j);
        }

        vector<int> a;
        for (int j = 0; j < c.size(); j++) {
            bool can_add = true;
            for (int k = 0; k < a.size(); k++) {
                if (a[k] % c[j] == 0 || c[j] % a[k] == 0 || gcd(a[k], c[j]) == 1) {
                    can_add = false;
                    break;
                }
            }
            if (can_add) {
                a.push_back(c[j]);
                if (a.size() == n) {
                    break;
                }
            }
        }

        for (int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}