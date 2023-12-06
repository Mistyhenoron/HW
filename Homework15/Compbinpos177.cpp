#include <bits/stdc++.h>

using namespace std;

string s;
int cnt;
int main() {
    cin >> s;
    int g = s.size();
    for (int i = 0; i < g; i++) {
        if (s[i] == '0') {
            cnt++;
        }
        else {
            cout << (char)(cnt + 'a');
            cnt = 0;
        }
    }
    return 0;
}
