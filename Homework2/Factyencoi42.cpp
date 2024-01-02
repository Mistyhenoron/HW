#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int p, f = 10, ans;

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n*fact(n-1);
}

int main() {
    cin >> p;
    while (true) {
        if (p - fact(f) >= 0) {
            p -= fact(f);
            ans++;
        }
        else {
            f--;
        }
        if (p == 0) {
            break;
        }
    }
    cout << ans;
    return 0;
}
