#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class BinaryStringGenerator {
private:
    int length;
    int current;

public:
    BinaryStringGenerator(int len) : length(len), current(0) {}

    std::string next() {
        if (current >= (1 << length)) {
            return "";  // Все строки сгенерированы
        }

        std::string result(length, '0');
        for (int i = 0; i < length; ++i) {
            if (current & (1 << i)) {
                result[length - 1 - i] = '1';
            }
        }

        ++current;
        return result;
    }

    bool hasNext() {
        return current < (1 << length);
    }
};

int isSimilarBinaryString(string a, string b, int n) {
    vector <int> arr;
    
    for (int i = 0; i < a.size(); i++) {
        cout << a << " " << b << " " << a[i] << " " << b[i] << "\n";
        arr.push_back(a[i] == b[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    if (sum > 0) {
        return 1;
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        int n;
        cin >> n;

        string binary_string;
        cin >> binary_string;

        BinaryStringGenerator generator(n);

        while (generator.hasNext()) {
            int count = 0;
            // cout << binary_string.size() << "\n";
            string new_string = generator.next();
            // cout << new_string << "\n";
            for (int k = 0; k < binary_string.size() - n + 1; k++) {
                if (isSimilarBinaryString(binary_string.substr(k, n), new_string, n) == 1) {
                    count += 1;
                    }
                }
            cout << new_string << " " << count << "\n";
            if ((binary_string.size() - n + 1) == count) {
                cout << new_string << "\n";
                break;
            }
        }
    }
    return 0;
}