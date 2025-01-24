#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count_substring(const string& s, const string& sub) {
    int count = 0;
    for (size_t offset = s.find(sub); offset != string::npos; offset = s.find(sub, offset + 1)) {
        ++count;
    }
    return count;
}


string make_balanced(string s) {
    int count_ab = count_substring(s, "ab");
    int count_ba = count_substring(s, "ba");
    
    if (count_ab > count_ba) {
        for (char& c : s) {
            if (c == 'a') {
                c = 'b';
                break;
            }
        }
    } else if (count_ba > count_ab) {
        for (char& c : s) {
            if (c == 'b') {
                c = 'a';
                break;
            }
        }
    }

    return s;
}

int main() {
    int q;
    cin >> q;
    vector<string> results;
    
    for (int i = 0; i < q; ++i) {
        string t;
        cin >> t;
        results.push_back(make_balanced(t));
    }
    
    for (const auto& result : results) {
        cout << result << endl;
    }
    
    return 0;
}