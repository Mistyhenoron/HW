#include <bits/stdc++.h>

using namespace std;

int n, temp, cnt;
string s, strue;

int main() {
    cin >> n;
    temp = n;
    while (n>0) {
        if (n%2 == 0) {
            n/= 2;
            s.push_back('0');
        }
        else if (n%2 != 0) {
            n/= 2;
            s.push_back('1');
        }
    }
    int g = s.size();
    for (int i = 0; i < g; i++) {
        if (s[i] == '1') {
            cnt++;
        }
    }
    cout << temp + cnt;
    return 0;
}
