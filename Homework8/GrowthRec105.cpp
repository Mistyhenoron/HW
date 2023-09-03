#include <bits/stdc++.h>

using namespace std;

const int N = 204;

int n, m, x, t, d, a[N], z = 0;

int main() {
    cin >> n >> m >> x >> t >> d;
    for (int i = x; i != 0; i--) {
        a[i] = t - z;
        z += d;
    }
    if (m <= x) {
        cout << a[m];
    }
    else if (m > x) {
        cout << t;
    }
    return 0;
}
