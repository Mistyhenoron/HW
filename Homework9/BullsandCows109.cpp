#include <bits/stdc++.h>

using namespace std;

const int N = 1004;
int bulls, cows, a[N];
vector<int> b, c;
string s1, s2;

vector<int> conv(string s) {
    vector<int> res;
    for (int i = 0; i < s.size(); i++) {
            res.push_back(s[i] - '0');
    }
    return res;
}

int main() {
    cin >> s1 >> s2;
    b = conv(s1);
    c = conv(s2);

    for (int i = 0; i < 4; i++) {
        if (c[i] == b[i]) {
            bulls++;
        }
        a[c[i]] += 1;
    }
    for (int i = 0; i < 4; i++) {
        if (a[b[i]] >= 1) {
            cows++;
        }
    }
    cout << bulls << " " << cows - bulls;

    return 0;
}
