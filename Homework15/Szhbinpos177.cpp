#include <bits/stdc++.h>

using namespace std;

string s;

int main() {
    cin >> s;
    int g = s.size();
    for (int i = 0; i < g; i++) {
        if (s[i] == '1') {
            cout << 'a';
        }
        else {
            int cnt = 0;
            for (int j = i; j != '1'; j++) {
                cnt++;
                if (s[j+1] != '0') {
                    cout << (char)97 + cnt;
                }
            }
        }
    }
    return 0;
}
