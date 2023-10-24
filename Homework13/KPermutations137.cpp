#include <bits/stdc++.h>

using namespace std;

const int N = 14;
int n, p[N], used[N], ans,k
;

bool check(int p[N]) {
    for (int i = 1; i < n; i++) {
        if ( abs(p[i + 1] - p[i]) > k) {
            return false;
        }
    }
    return true;

}

void bt(int cnt) {
    if (cnt == n && check(p)) {
        ans++;
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
        p[cnt + 1] = i;
        used[i] = 1;
        bt(cnt + 1);
        used[i] = 0;
        }
    }
}

int main() {
    cin >> n >> k;
    bt(0);
    cout << ans;
    return 0;
}
