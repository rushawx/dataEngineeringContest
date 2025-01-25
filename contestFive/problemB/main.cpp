#include <iostream>
#include <vector>

using namespace std;

vector<int> solve(long long n, long long m, long long i, long long j) {
    long long d1 = i - 1 + j - 1;
    long long d2 = i - 1 + m - j;
    long long d3 = n - i + j - 1;
    long long d4 = n - i + m - j;
    
    if (d1 + d4 >= d2 + d3) {
        return {1, 1, (int)n, (int)m};
    } else {
        return {1, (int)m, (int)n, 1};
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, m, i, j;
        cin >> n >> m >> i >> j;
        
        vector<int> result = solve(n, m, i, j);
        cout << result[0] << " " << result[1] << " " << result[2] << " " << result[3] << endl;
    }

    return 0;
}
