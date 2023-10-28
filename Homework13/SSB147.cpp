#include <bits/stdc++.h>

using namespace std;

string s, d, m, y;

int main() {
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            break;
        }
        else {
            d += s[i];
        }
    }
        int del;
        for (int i = 0; i < d.size(); i++) {
            del += d[i];
        }
        del++;
        cnt = 0;
        for (int i = d.size() + 1; i < s.size(); i++) {
        if (s[i] == '/') {
            break;
        }
        else {
            m += s[i];
        }
    }   cnt = 0;
        for (int i = m.size() + d.size() + 2; i < s.size(); i++) {
        if (s[i] == '/') {
            break;
        }
        else {
            y += s[i];
        }
    }
    vector <int> resd, resm, resy;
    int d1 = d.size();
    while (d1 > 0) {
        resd.push_back(d1 % del);
        d1/del;
    }
    int m1 = m.size();
    while (m1 > 0) {
        resm.push_back(m1 % del);
        m1/del;
    }
    int y1 = y.size();
    while (y1 > 0) {
        resy.push_back(y1 % del);
        y1/del;
    }
    for (int i = 0; i < resd.size(); i++) {
        cout << resd[i];
    } for (int i = 0; i < resm.size(); i++) {
        cout << resm[i];
    }
     for (int i = 0; i < resy.size(); i++) {
        cout << resy[i];
    }
    return 0;
}
