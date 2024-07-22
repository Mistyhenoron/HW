#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
using vvvi = vector<vector<vector<ll>>>;
#define p_b push_back
const int INF = INT_MAX;

ll n, k, m;

int main() {
    cin >> k >> n >> m;
    vvvi dp(n+1, vvi(m+1, vi(k, 0)));
    dp[0][0][0] = 1;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            for (int mod = 0; mod < k; mod++) {
                if (i < n) {
                    int nmod = (mod*2+1) % k;
                    dp[i+1][j][nmod] += dp[i][j][mod];
                }
                if (j < m && i > 0) {
                    int nmod = (mod*2+0) % k;
                    dp[i][j+1][nmod] += dp[i][j][mod];
                }
            }
        }
    }
    cout << dp[n][m][0];
    return 0;
}
  
