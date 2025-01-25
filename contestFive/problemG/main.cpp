#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateSequences(int open, int close, string current, vector<string>& result, int limit) {

    if (result.size() == limit) {
        return;
    }

    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }

    if (open > 0) {
        generateSequences(open - 1, close, current + "(", result, limit);
    }

    if (close > open) {
        generateSequences(open, close - 1, current + ")", result, limit);
    }
}

vector<string> generateRegularBracketSequences(int n) {
    vector<string> result;
    generateSequences(n, n, "", result, n);
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> result = generateRegularBracketSequences(n);

        for (int i = 0; i < n; i++) {
            cout << result[i] << "\n";
        }
    }

    return 0;
}