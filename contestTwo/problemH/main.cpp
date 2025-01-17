#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int count = 0;

    while (n > 0) {
        count++;
        if (n > 5) {
            n -= 5;
        } else {
            n = 0;
        }
    }

    cout << count << endl;
}