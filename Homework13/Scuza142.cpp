#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

long long t, nm[N], qm[N];

int bs(int a[N], int n) {
    sort(a[0], a[n-1]);
    int l = 0, r = n - 1;
    while (l + 1 < r) {
        int m = (l + r)/2;
        if (a[m] >= n) {
            r = m;
        }
        else {
            l = m;
        }
    }
    return r;
}

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, q;
        cin >> n >> q;
        for(int i = 0; i < n; i++) {
            cin >> nm[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> qm[i];
        }
        for (int i = 0; i < q; i++) {
                long long ans = 0;
                int g = bs(nm, n);
            for (int j = 0; j < g; j++) {
                    ans += nm[j];
            }
        cout << ans << " ";
        }
    cout << "\n";

    }
    return 0;
}
