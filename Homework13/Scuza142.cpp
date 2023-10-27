#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 7;

long long t, nm[N], qm[N], prefmax[N], prefsum[N], n, q;

int bs(long long j) {
    int l = -1, r = n;
    while (l + 1 < r) {
        int m = (l + r)/2;
        if (prefmax[m] < j) {
            l = m;
        }
        else {
            r = m;
        }
    }
    return r;

}

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> q;
        for(int i = 0; i < n; i++) {
            cin >> nm[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> qm[i];
        }
        long long prefmax[N];
        long long prefsum[N];
        prefmax[0] = nm[0];
        prefsum[0] = nm[0];
        for (int i = 1; i < n; i++) {
            prefmax[i] = max(prefmax[i - 1], nm[i]);
            prefsum[i] = prefsum[i - 1] + nm[i];
        }
        for (int i = 0; i < q; i++) {
                if (prefsum[0] < q[i]) {
                    continue;
                }
                else {
                long long temp = bs(qm[i]);
                long long ans = prefsum[temp];
            }
            cout << ans << " ";
        }
    }
    return 0;
}
