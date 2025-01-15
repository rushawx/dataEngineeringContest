#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int p = a[k - 1];

    int output = 0;

    for (int j = 0; j < n; j++) {
        if (a[j] >= p && a[j] > 0) {
            output++;
        }
    }

    cout << output << endl;
}