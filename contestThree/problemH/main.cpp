#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string word;
    cin >> word;

    int count = 0;

    map<string, int> freq;

    for (int i = 0; i < n - 1; i++) {
        string bigram = word.substr(i, 2);
        freq[bigram]++;
        count = max(count, freq[bigram]);
    }

    for (auto& [bigram, f] : freq) {
        if (f == count) {
            cout << bigram << endl;
            break;
        }
    }
}