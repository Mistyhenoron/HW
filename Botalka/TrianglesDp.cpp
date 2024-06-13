#include <bits/stdc++.h>

using namespace std;

int n, temp;

int main(){
    cin >> n;
    if (n == 1) {
        int q;
        cin >> q;
        cout << q;
        return 0;
    }
    if (n == 2) {
        int f, s, t;
        cin >> f >> s >> t;
        cout << max(f+s, f+t);
        return 0;
    }
    
    int izn[1000][1000], dp[1000][1000];
    string s;
    int cnt = 1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < cnt; j++) {
            cin >> izn[i][j];
        }
        cnt++;
    }
    cnt = 3;
    dp[0][0] = izn[0][0];
    dp[1][0] = dp[0][0] + izn[1][0];
    dp[1][1] = dp[0][0] + izn[1][1];
    
    for (int i = 2; i < n; i++) {
        for (int j = 0; j < cnt; j++) {
            if (j == 0) {
                dp[i][j] = dp[i-1][j] + izn[i][j];
            }
            else if (j == cnt - 1) {
                dp[i][j] = dp[i-1][j-1] + izn[i][j];
            }
            else {
                dp[i][j] = max((dp[i-1][j-1] + izn[i][j]), (dp[i-1][j] + izn[i][j]));
            }
        }
        cnt++;
    }
    
    int maxx = -99999999;
    for (int i = 0; i < cnt-1; i++) {
        if (dp[n-1][i] >= maxx) {
            maxx = dp[n-1][i];
        }
    }
    cout << maxx;
    return 0;
}
