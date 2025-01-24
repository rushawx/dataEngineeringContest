#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        vector <int> nums;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        set<int> areas;
        for (int j = 0; j < m; j++) {
            for (int k = j + 1; k < m; k++) {
                areas.insert(nums[k] - nums[j]);
            }
        }

        cout << areas.size() << "\n";
    }

    return 0;
}