#include <bits/stdc++.h>
 
using namespace std;

int n, W, w[10000], p[100000], parent_p[100000], parent_w[10000];
const int INF = 999999999;

int main() {
    cin >> n >> W;
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    vector<vector<int>> dp(n+1, vector<int>(W+1, -INF));
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= w[i] && dp[i-1][j-w[i]] != -INF) {
                dp[i][j] = max(dp[i-1][j-w[i]] + p[i], dp[i][j]);
            }
        }
    }
    cout << *max_element(dp[n].begin(), dp[n].end());
    return 0;
}
