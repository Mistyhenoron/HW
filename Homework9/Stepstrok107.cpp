#include <bits/stdc++.h>

using namespace std;

string s, x, t;
long long k;

int main() {
    cin >> s >> k;
    if (k > 0) {
        for (int i = 0; i < k; i++) {
            t += s;
            if (t.size() > 1023) {
                t.resize(1023);
                break;
            }
        }
        cout << t;
        return 0;
    }
    if (s.size()%abs(k) != 0 || s.size() <= abs(k)) {
        cout << "NO SOLUTION";
        return 0;
    }
    else {
        for (int i = 0; i < s.size()/abs(k); i++) {
            for (int j = i; j < s.size() - s.size()/abs(k); j+= s.size()/abs(k)) {
                if (s[j] == s[j + s.size()/abs(k)]) {
                    continue;
                }
                else {
                    cout << "NO SOLUTION";
                }
            }
            x += s[i];
        }
    }
    if (x.size() > 1023) {
        x.resize(1023);
    }
    cout << x;
    return 0;
}
