#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vvi = vector<vector<int>>;
using vi = vector<int>;
#define p_b push_back
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
    vvi p(n, vi(m, -1));
    vvi dp(n, vi(m));
    for (int i = 0; i < n; i++) {
        for (int  j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                dp[i][j] = get(i-1, j-1, dp) + 1;
                p[i][j] = 0;
            } else {
                if (get(i-1, j, dp) > get(i, j-1, dp)) {
                    dp[i][j] = get(i-1, j, dp);
                    p[i][j] = 1;
                } else {
                    dp[i][j] = get(i, j-1, dp);
                    p[i][j] = 2;
                }
            }
        }
    }
    int curi = n-1, curj = m-1;
    vi ans;
    while (curj >= 0 && curi >= 0) {
        if (p[curi][curj] == 0) {
            ans.p_b(a[curi]);
            curi--;
            curj--;
        } else if (p[curi][curj] == 1) {
            curi--;
        } else {
            curj--;
        }
    }
    reverse(ans.begin(), ans.end());
    for (int i : ans) {
        cout << i << " ";
    }
    return 0;
}
