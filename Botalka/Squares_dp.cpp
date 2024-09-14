#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
ll INF = INT_MAX;

int n, m;

int main() {
    cin >> n >> m;
    vvi dp(n+1, vi(m+1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == j) {
                dp[i][j] = 0;
            } else {
                dp[i][j] = INF;
                for (int ltr = 1; ltr <= i; ltr++) {
                    dp[i][j] = min(dp[i][j], dp[ltr][j] + dp[i-ltr][j]+1);
                }
                for (int ltr = 1; ltr <= j; ltr++) {
                    dp[i][j] = min(dp[i][j], dp[i][ltr] + dp[i][j-ltr]+1);
                }
            }
        }
    }
    cout << dp[n][m];
    return 0;
}
