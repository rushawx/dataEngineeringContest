#include <iostream>
#include <vector>

using namespace std;

void solve(int n) {
    vector<int> operations;
    
    // Мы можем выбрать m = n операций
    int m = n;
    
    // В каждой операции выбираем мешок с номером i
    for (int i = 1; i <= m; i++) {
        operations.push_back(i);
    }
    
    cout << m << "\n";
    for (int op : operations) {
        cout << op << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}