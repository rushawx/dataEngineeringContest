#include <iostream>
#include <vector>

using namespace std;

int firstNonNegativeIdx(vector <int> a) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > 0) {
            return i;
        }
    }
    return -1;
}

int lastNonNegativeIdx(vector <int> a) {
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] >= 0) {
            return i;
        }
    }
    return -1;
}

void transfer(vector <int> &a, int firstIdx, int lastIdx) {
    a[firstIdx]--;
    a[lastIdx]++;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        vector <int> a(n);

        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }

        for (int j = 0; j < k; j++) {
            int firstIdx = firstNonNegativeIdx(a);
            int lastIdx = lastNonNegativeIdx(a);
            if (firstIdx == -1 || lastIdx == -1 || firstIdx == lastIdx) {
                break;
            }
            transfer(a, firstIdx, lastIdx);
        }

        for (int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
    }

    return 0;
}