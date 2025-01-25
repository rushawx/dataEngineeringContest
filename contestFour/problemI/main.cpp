#include <iostream>
#include <cstdio>
 
using namespace std;
 
int const N = 1e5 + 10;
int a[N], n, T;
 
int main() {
    cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);
        if (a[1] + a[2] <= a[n]) cout << 1 << " " << 2 << " " << n << endl;
        else cout << -1 << endl;
    }
    return 0;
}