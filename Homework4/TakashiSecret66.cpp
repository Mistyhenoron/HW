#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 4;

int n, x, a[N], j, z, m, y;
bool b[N];

int main() {
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int s = x;
    while (true) {
        b[s] = 1;
        int nxt = a[s];
        if (b[nxt] = 1) {
            break;
        }
        s = nxt;
    }
    int res = 0;
    for (int i = 1; i <= n; ++i) {
        res += b[i];
    }
    cout << res;
    return 0;
}
