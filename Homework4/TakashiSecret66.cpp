#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 4;

int n, x, a[N], res;

bool b[N];

int main() {
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    while (true) {
        b[x] = 1;
        int nxt = a[x];
        if (b[nxt] = 1) {
            break;
        }
        x = nxt;
    }
    for (int i = 1; i <= n; ++i) {
        res += b[i];
    }
    cout << res;
    return 0;
}
