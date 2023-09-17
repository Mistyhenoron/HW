#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll n, k;

int main() {
    cin >> n;
    ll ans;
    k = 0;
    ans = 1;
    while (ans*2 <= n) {
        ans = ans*2;
        k++;
    }
    cout << k;
    return 0;
}
