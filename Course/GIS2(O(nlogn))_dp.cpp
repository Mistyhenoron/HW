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
    vector<int> parent(n+1, -1);
    vector<int> index(n+1, -1);
    vector<int> dp(n+1, INF);
    dp[0] = -INF;
    for (int i = 0; i < n; i++) {
        int pos = lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
        dp[pos] = a[i];
        index[pos] = i;
        parent[i] = index[pos-1];
    }
    int cur = -1;
    for (int i = n; i > -1; i--) {
        if (dp[i] != INF) {
            cur = index[i];
            break;
        }
    }
    vector<int> ans;
    while (cur > -1) {
        ans.push_back(a[cur]);
        cur = parent[cur];
    }
    reverse(ans.begin(), ans.end());
    for (int i : ans) {
        cout << i << " ";
    }
}
