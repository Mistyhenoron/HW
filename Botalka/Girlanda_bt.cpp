#include <bits/stdc++.h>

using namespace std;

int n, m, k, lamps[1000][2], ans, colors[1000];

bool check() {
    for (int i = 0; i < m; i++) {
        if (colors[lamps[i][0]] == colors[lamps[i][1]]) {
            return 0;
        }
    }
    return 1;
}

void bt(int cnt) {
    if (cnt == n) {
        if (check()) {
            ans++;
        }
        return;
    }
    for (int i = 1; i <= k; i++) {
        colors[cnt] = i;
        bt(cnt+1);
    }
    
}

int main(){
    cin >> n >> k >> m;
    for (int i = 0; i < m; i++) {
        int f, s;
        cin >> f >> s;
        lamps[i][0] = f;
        lamps[i][1] = s;
        lamps[i][0]--;
        lamps[i][1]--;
    }
    
    bt(0);
    
    cout << ans;
    return 0;
}

