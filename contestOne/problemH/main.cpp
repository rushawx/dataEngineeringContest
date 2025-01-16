#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int xTarget = 3;
    int yTarget = 3;

    int xCurrent = 0;
    int yCurrent = 0;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int x;
            cin >> x;

            if (x == 1) {
                xCurrent = i;
                yCurrent = j;
                break;
            }
        }
    }

    cout << abs(xTarget - xCurrent) + abs(yTarget - yCurrent) << endl;
}