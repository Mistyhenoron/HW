#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
const int INF = INT_MAX;

int n, k;

int main() {
    cin >> n >> k;
    vi p(n+1);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    vi prefsum(n+1);
    for (int i = 1; i <= n; i++) {
        prefsum[i] = prefsum[i-1] + p[i-1];
    }
    vvi dp(n+1, vi(k+1));
    for (int i = 1; i <= n; i++) {
        dp[i][1] = prefsum[i];
    }   
    for (int i = 1; i <= n; i++) {
        for (int j = 2; j <= k; j++) {
            dp[i][j] = INF;
            for (int l = 1; l < i; l++) {
                dp[i][j] = min(dp[i][j], max(dp[l][j-1], prefsum[i] - prefsum[l]));
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
