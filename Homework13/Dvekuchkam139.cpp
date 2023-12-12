#include <bits/stdc++.h>

using namespace std;

const int N = 40;
int a[N], n, minn = 99999;

void bt(int cnt, int k1, int k2) {
    if (cnt == n) {
    if (abs(k1 - k2) < minn) {
        minn = abs(k1 - k2);
        }
        return;
    }
    bt(cnt + 1, k1 + a[cnt], k2);
    bt(cnt + 1, k1, k2 + a[cnt]);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bt(0, 0, 0);
    cout << minn;
    return 0;
}
