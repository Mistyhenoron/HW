#include <bits/stdc++.h>

using namespace std;

int n, a1, k, b, m;

int INF = 1e9;

int main() {
    cin >> n >> a1 >> k >> b >> m;
    vector <int> a(n);
    a[0] = a1;
    for (int i = 1; i < n; i++) {
        a[i] = (k*a[i-1]+b)%m;
    }
    vector<int> dp(n+1, INF);
    dp[0] = -INF;
    for (int i = 0; i < n; i++) {
        dp[lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin()] = a[i];
    }
    for (int i = n-1; i >= 0; i--) {
        if (dp[i] != INF) {
            cout << i;
            return 0;
        }
    }
    return 0;
}
