#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string word;
    cin >> word;

    string forbidden = "xxx";

    int count = 0;

    for (int i = 0; i < n - 2; i++) {
        if (word.substr(i, 3) == forbidden) {
            count += 1;
        }
    }

    cout << count << "\n";
}