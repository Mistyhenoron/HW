#include <bits/stdc++.h>

using namespace std;


using bint = vector <int>;

bint read() {
    string s;
    cin >> s;
    bint res(s.size());
    for (int i = 0; i < s.size(); i++) {
        res[i] = s[s.size() - 1 - i] - '0';
    }
    return res;
}

bint sum(bint a, bint b) {
    bint c(max(a.size(), b.size()) + 1);
    for (int i = 0; i +1 < c.size(); i++) {
        c[i] += (i < a.size() ? a[i] : 0) + (i < b.size() ? b[i] : 0);
        c[i+1] += c[i]/10;
        c[i] %= 10;
    }
    while (c.size() > 1 && c.back() == 0) {
        c.pop_back();
    }
    return c;
}

void write(bint x) {
    for (int i = 0; i < x.size(); i++) {
        cout << x[x.size() - 1 - i];
    }
}

int main() {
    bint f = read();
    bint s = read();
    write(sum(f, s));
    return 0;
}
