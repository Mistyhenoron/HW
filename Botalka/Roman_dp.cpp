#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
#define p_b push_back
const int INF = INT_MAX;

int main() {
    ll n, k;
    cin >> n >> k;
    vi pages(n);
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }
    vvi dp(n + 1, vi(k + 1));
    vi prefixSum(n + 1);
    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + pages[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        dp[i][1] = prefixSum[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int K = 2; K <= k; K++) {
            dp[i][K] = INT_MAX;
            for (int j = 0; j < i; j++) {
                dp[i][K] = min(dp[i][K], max(dp[j][K - 1], prefixSum[i] - prefixSum[j]));
            }
        }
    }
    cout << dp[n][k];
    return 0;
} // на acmp ОК а на cf почему то нет
