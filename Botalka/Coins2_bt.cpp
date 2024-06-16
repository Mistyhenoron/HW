#include <bits/stdc++.h>
 
using namespace std;
 
int n, m, ans, checksum;
vector <int> coins;
bool light = 0;
 
void bt(int cnt, int summ, int amount) {
    if (summ == n) {
        if (light == 0) {
            ans = amount;
            light = 1;
        }
        return;
    }
    if (summ > n) {
        return;
    }
    if (cnt == 0) {
        return;
    }
    bt(cnt-1, summ, amount);
    if (summ + coins[cnt] <= n) {
        bt(cnt-1, summ + coins[cnt], amount+1);
    }
     
}
 
int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int coin;
        cin >> coin;
        coins.push_back(coin);
        coins.push_back(coin);
        checksum += 2*coin;
    }
    if (checksum < n) {
        cout << -1;
        return 0;
    }
    sort(coins.begin(), coins.end());
    bt(((2*m)-1), 0, 0);
    if (light == 0) {
        cout << 0;
        return 0;
    }
    cout << ans;
    return 0;
}
