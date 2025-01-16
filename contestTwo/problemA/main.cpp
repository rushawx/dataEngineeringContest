#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector <int> nums;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            nums.push_back(s[i] - '0');
        }
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) {
            cout << "+";
        }
    }
}