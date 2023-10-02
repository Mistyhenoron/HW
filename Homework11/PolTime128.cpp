#include <bits/stdc++.h>

using namespace std;

string s;
int h, m;

bool check(int h, int m) {
    return h%10 == m/10 && h/10 == m%10;
}

int main() {
    cin >> s;
    h = (s[0] - '0') * 10 + (s[1] - '0');
    m = (s[3] - '0') * 10 + (s[4] - '0');
    m++;
    while (!check(h,m)) {
        m++;
        if (m == 60) {
            m = 0;
            h  = (h + 1) % 24;
        }
    }
    cout << h/10 << h%10 << ":" << m/10 << m%10;
    return 0;
}
