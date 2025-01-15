#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;

    for (int i = 2; i <= a; i = i + 2) {
        int j = a - i;
        if (i % 2 == 0 && j % 2 == 0 && j != 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}
