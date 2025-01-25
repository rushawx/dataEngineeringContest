#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;

        long long x = a & b;
        
        long long output = (a ^ x) + (b ^ x);
        
        cout << output << "\n";
    }
}