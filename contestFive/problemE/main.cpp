#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector <int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    vector <int> b;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }

    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            a[i] = b.back();
            b.pop_back();
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (a[i] >= a[i + 1]) {
            cout << "Yes" << "\n";
            return 0;
        }
    }

    cout << "No" << "\n";
}