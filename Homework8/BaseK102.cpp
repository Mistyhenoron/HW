#include <bits/stdc++.h>

using namespace std;

int k;
string a, b;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0), cin.tie(0);
    cin >> k >> a >> b;
    long long va = 0, vb = 0;
    for (int i = 0; i < a.size(); i++) {
        va = va*k + (a[i] - '0');
    }
    for (int i = 0; i < b.size(); i++) {
        vb = vb*k +(b[i] - '0');
    }
    cout << va*vb;
    return 0;
}
