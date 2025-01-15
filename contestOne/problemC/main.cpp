#include <iostream>

using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;

    int na = n / a;
    if (n % a != 0) {
        na++;
    }

    int ma = m / a;
    if (m % a != 0) {
        ma++;
    }

    cout << (long long) na * ma << endl;
}