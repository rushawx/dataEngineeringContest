#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string incrementForward = "++X";
    string incrementBackward = "X++";

    int count = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s.compare(incrementForward) == 0 || s.compare(incrementBackward) == 0) {
            count++;
        } else {
            count--;
        }
    }

    cout << count << endl;
}