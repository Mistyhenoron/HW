#include <bits/stdc++.h>

using namespace std;

string s, t;

int cnt(char a, char b) {
    if (a < b) {
        return b - a;
    }
        return 26 - (a - b);
}

int main() {
    cin >> s >> t;
    for (int i = 0; i + 1 < s.size(); i++) {
        if (cnt(s[i], t[i]) ==  cnt(s[i+1], t[i+1])) {
            continue;
        }
        else {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
