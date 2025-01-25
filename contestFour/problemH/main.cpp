#include <iostream>
#include <vector>

using namespace std;

vector<long long> solve(const vector<long long>& a) {
    int n = a.size();
    vector<long long> b(n);

    for (int i = 0; i < n; i += 2) {
        b[i] = a[i + 1];
        b[i + 1] = -a[i];
    }

    return b;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        vector<long long> b = solve(a);

        for (int j = 0; j < n; j++) {
            cout << b[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}