#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

long long t, nm[N], qm[N];

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
            for (int j = 0; j < n; j++) {
                if (qm[i] >= nm[j]) {
                    ans += nm[j];
                }
                else {
                    break;
                }
            }
        cout << ans << " ";
        }
    cout << "\n";

    }
    return 0;
}
