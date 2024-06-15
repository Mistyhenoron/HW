#include <bits/stdc++.h>

using namespace std;

int n, m, ans = -1, checkans;
bool light = 1, backlight = 0;
vector <int> a;

void bt(int cnt, int sum, int amount) { 
    if (cnt == m) {
        if (sum == n) {
            if (light == 1) { // нам нужен первый вариант тк он самый лучший
                ans = amount;
                light = 0;
            }
            backlight = 1; // если вариантов вообще не нашлось, то в ответе 0
        }
        return;
    }
    
    bt(cnt+1, sum, amount);
    
    if (sum + a[cnt] <= n) {
        bt(cnt+1, sum += a[cnt], amount++);
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
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    if (checkans < n) {
        cout << -1;
        return 0;
    }
    bt(0, 0, 0);
    
    if (backlight == 0) {
        cout << 0;
        return 0;
    }
    cout << ans;
    return 0;
}





