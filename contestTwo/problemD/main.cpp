#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string name;
    cin >> name;

    set <char> s;

    for (int i = 0; i < name.size(); i++) {
        s.insert(name[i]);
    }

    if (s.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}