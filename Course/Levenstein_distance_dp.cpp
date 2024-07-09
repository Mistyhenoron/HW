#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vvi = vector<vector<int>>;
using vi = vector<int>;
#define p_b push_back
const int INF = INT_MAX;

string s1, s2;

int main() {
    cin >> s1 >> s2;
    int iC = 1, rC = 1, dC = 1;
    int n = s1.size();
    int m = s2.size();
    vvi dp(n+1, vi(m+1));
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = 0;
            } else if (i > 0 && j == 0) {
                dp[i][j] = i * dC;
            } else if (i == 0 && j > 0) {
                dp[i][j] = j * iC;
            } else if (s1[i-1] ==  s2[j-1]) { 
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = min(dp[i-1][j]+dC, min(dp[i][j-1]+iC, dp[i-1][j-1]+rC)); // единственное че я не понял почему в dp[i-1][j] мы добавляем delete cost а не insert cost, мы ведь типа должны увеличить первую строку на единицу, не?
            }
        }
    }
    cout << dp[n][m];
    return 0;
}
