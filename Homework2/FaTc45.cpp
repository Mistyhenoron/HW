#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+4;
int COTEST = 1, n, k, a[N][2], t, ans;

void solve() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (k - a[i][0] > 0) {
            k+= a[i][1];
            ans+= a[i][0];
        }
        else {
            ans+= k;
            cout << ans;
            break;
        }
    }
}

int main(){
    while (COTEST--) {
        solve();
    }
    return 0;
}
