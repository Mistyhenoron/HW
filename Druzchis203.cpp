#include <bits/stdc++.h>

using namespace std;

int k;
string s, s2;

int main() {
    cin >> k;
    while (k--) {
        set <int> a, b;
        cin >> s >> s2;
        for (int i = 0; i < s.size(); i++) {
            a.insert(s[i] - '0');
        }
        for (int i = 0; i < s2.size(); i++) {
            b.insert(s2[i] - '0');
        }
        if (a == b) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }

    }
    return 0;
}
