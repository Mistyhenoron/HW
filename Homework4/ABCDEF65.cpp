#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    long long  x = ((a*b*c) - (d*e*f)) % 998244353;
    cout << x;
        return 0;
}
