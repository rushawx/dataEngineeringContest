#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    char r;

    int count = 0;

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (i == 0) {
            r = c;
            continue;
        } else {
            if (c == r) {
                count++;
            }
        }
        r = c;
    }

    cout << count;
}