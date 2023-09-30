#include <bits/stdc++.h>

using namespace std;

string first, sec;
    int cnt;
bool check(string s) {
    s += s;
    for (int i = s.size(); i >= 0; i--) {
        string t;
        t = s.substr(s[i - s.size()], s.size());
        if (t == sec) {
            return 1;
        }
    }
    return 0;
}

int main() {
    cin >> first >> sec;
    for (int i = 0; i < first.size(); i++) {
        string temp;
        temp = first.substr(first[i], first[i + sec.size()]);
        if (check(temp)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
