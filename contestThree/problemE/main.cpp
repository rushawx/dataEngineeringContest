#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string host;
    cin >> host;

    string guest;
    cin >> guest;

    string pile;
    cin >> pile;

    string combined = host + guest;

    sort(combined.begin(), combined.end());

    sort(pile.begin(), pile.end());

    if (combined == pile) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}