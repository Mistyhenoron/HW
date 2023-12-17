#include <bits/stdc++.h>

using namespace std;

int n, cnt;
string s1, s2;

int main() {
    cin >> n;
    while (true) {
        s1 += s2;
        cnt++;
        string temp = to_string(cnt);
        s2 += temp;
        if (s1.size() > n) {
            break;
        }
    }
    cout << s1[n-1];
    return 0;
}
