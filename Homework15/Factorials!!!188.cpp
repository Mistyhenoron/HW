#include <bits/stdc++.h>

using namespace std;

string s;
int cnt, n, ans = 1;

int main() {
    getline(cin, s);
    if (s[2] == '!') {
        for (int i = 2; i < s.size(); i++) {
            cnt++;
            n = s[0] - '0';
        }
    }
    else {
        for (int i = 3; i < s.size(); i++) {
            cnt++;
            n = 10;
        }
    }
    int temp = cnt;
    int n1 = n;
    while (true) {
        ans *= n1;
        if (n1 - cnt < 1) {
            break;
        }
        n1 -= cnt;
    }
    cout << ans;
    return 0;
}
