#include <bits/stdc++.h>

using namespace std;

const int N = 1004;
int bulls, cows, s21, s22, s23, s24, s2, s11, s12, s13, s14, s1;
int a[N];
vector <int> b;
vector <int> c;
int main() {
    cin >> s1 >> s2;
    s21 = s2/1000;
    s22 = s2/100%10;
    s23 = s2/10%10;
    s24 = s2%10;
    b.push_back(s21);
    b.push_back(s22);
    b.push_back(s23);
    b.push_back(s24);
    s11 = s1/1000;
    s12 = s1/100%10;
    s13 = s1/10%10;
    s14 = s1%10;
    c.push_back(s11);
    c.push_back(s12);
    c.push_back(s13);
    c.push_back(s14);
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
