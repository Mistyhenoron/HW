#include <bits/stdc++.h>

using namespace std;

int temp[3], a[3] {1,0,0};
string s;

int main() {
    ios::sync_with_stdio();
    cin.tie(), cout.tie();
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            temp[0] = a[0];
            a[0] = a[1];
            a[1] = temp[0];
            temp[0] = 0;
        }
        else if (s[i] == 'B') {
            temp[2] = a[2];
            a[2] = a[1];
            a[1] = temp[2];
            temp[2] = 0;
        }
        else if (s[i] == 'C') {
            temp[0] = a[0];
            a[0] = a[2];
            a[2] = temp[0];
            temp[0] = 0;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (a[i] == 1) {
            cout << i+1;
        }
    }
    return 0;
}
