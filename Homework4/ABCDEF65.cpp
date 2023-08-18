#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;
int main() {
    long long a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> f;
    a = a % mod;
    b = b % mod;
    c = c % mod;
    d = d % mod;
    e = e % mod;
    f = f % mod;
    long long l = ((a*b % mod)*c) % mod;
    long long r = ((d*e % mod)*f) % mod;
    cout << (l - r + mod) % mod;
    return 0;
}
