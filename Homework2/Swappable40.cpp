#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 1e6 + 4;
ll a[N], n, ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (a[i] != a[j]) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
