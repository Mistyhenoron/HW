#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vvi = vector<vector<int>>;
using vi = vector<int>;

const int INF = INT_MAX;

int n, m;

inline int get(int i, int j, vvi& dp) {
    if (i < 0 || j < 0) {
        return 0;
    }
    return dp[i][j];
}

int main() {
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    vi b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    vvi dp(n, vi(m));
    for (int i = 0; i < n; i++) {
        for (int  j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                dp[i][j] = get(i-1, j-1, dp) + 1;
            } else {
                dp[i][j] = max(get(i-1, j, dp), get(i, j-1, dp));
            }
        }
    }
    cout << dp[n-1][m-1];
    return 0;
}
