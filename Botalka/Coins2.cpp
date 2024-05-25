#include <bits/stdc++.h>

using namespace std;

int n, m, ans = -1, checkans;
bool light = 1, backlight = 0;

vector <int> a;
void bt(int cnt, int sum, int amount) { 
    if (sum >= n) {
        if (sum == n) {
            if (light = 1) {
                ans = amount;
                light = 0;
            }
            backlight = 1;
        }
        return;
    }
    if (sum + a[cnt] <= n) {
        bt(cnt+1, sum += a[cnt], amount++);
    } else {
        bt(cnt+1, sum, amount);
    }
    
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
        a.push_back(temp);
        checkans += 2*temp;
    }
    reverse(a.begin(), a.end());
    if (checkans < n) {
        cout << -1;
        return 0;
    }
    bt(0, 0, 0);
    if (backlight = 0) {
        cout << 0;
        return 0;
    }
    cout << ans;
    return 0;
}
// задебажить не получается




