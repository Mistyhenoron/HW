#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
using vvi = vector<vector<ll>>;
using vi = vector<ll>;
 
const ll INF = 1e9;
 
ll n, m, t;
 
ll f(int ii, int jj, vvi& dp) {
    if (ii < 1 || jj < 1) {
        return INF;
    }
    return dp[ii][jj];
}
 
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vvi dp(n+1, vi(m+1, 0));
        vvi a(n+1, vi(m+1));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        dp[1][1] = a[1][1];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                  if (i == 1 && j == 1) {
                      continue;
                } 
                if (abs(f(i-1, j, dp) + a[i][j]) <= abs(f(i, j-1, dp) + a[i][j])) { // < or <=
                      dp[i][j] = dp[i-1][j] + a[i][j];
                } else {
                    dp[i][j] = dp[i][j-1] + a[i][j];
                }
            }
        }
        if (dp[n][m] == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
