#include <bits/stdc++.h>

using namespace std;

int n, m;
long long INF = -1e9;

inline int f(int i, int j, const vector<vector<int>>& dp) {
    if (i < 0 || j < 0) {
        return INF;
    }
    return dp[i][j];
}

int main() {
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m));
    vector<vector<int>> p(n, vector<int>(m, -1));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    dp[0][0] = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                continue;
            }
            if (f(i-1, j, dp) > f(i, j-1, dp)) {
                p[i][j] = 0;
                dp[i][j] = f(i-1, j, dp) + a[i][j];
            }
            else {
                p[i][j] = 1;
                dp[i][j] = f(i, j-1, dp) + a[i][j];
            }
        }
    }
    vector <char> ans;
    int nowi = n-1, nowj = m-1;
    while (nowi != 0 || nowj != 0) {
        if (p[nowi][nowj] == 0) {
            ans.push_back('D');
            nowi--;
        }
        else {
            ans.push_back('R');
            nowj--;
        }
    }
    reverse(ans.begin(), ans.end());
    for (char c : ans) {
        cout << c << ' ';
    }
    return 0;
}// неправильный формат вывода явахуе
