#include <iostream>
#include <vector>
#include <string>

using namespace std;

void find_mex() {
    string s;
    int c = 0;
    cin >> s;
    int l=s.length();
    char ch=s[0];
    for(int i=0;i<l;i++)
    {
        if(i==0)continue;
        if (s[i] != ch)
        {
            if(ch=='0')c++;
            ch=s[i];
        }
        if (c>1)
        {
            c=2;
            break;
        }
    }
    if (c<2)
    {
        if(ch=='0')c++;
    }
    cout << c << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        find_mex();
    }

    return 0;
}