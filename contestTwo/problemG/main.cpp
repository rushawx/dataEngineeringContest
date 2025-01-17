#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string input;
    cin >> input;

    int count = 1;
    char previous = input[0];
    
    for (int i = 1; i < input.size(); i++) {
        if (input[i] == previous) {
            count++;
        } else {
            count = 1;
        }
        previous = input[i];
        if (count == 7) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}