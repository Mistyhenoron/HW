#include <bits/stdc++.h>

using namespace std;

const int N = 9;
int n, k, ans, p[N], used[N], cnt, kcheck;

int check() {
    kcheck = k;
    for (int i = 1; i <= n; i++) {
        if (p[i] == i) {
            kcheck--;
        }
    }
    return kcheck;
}

int fiunmpoints(int cnt) {
    if (cnt == n && check() == 0) {
        ans++;
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            p[cnt + 1] = i;
            used[i] = 1;
            fiunmpoints(cnt + 1);
            used[i] = 0;
        }
    }

}

int main() {
    cin >> n >> k;
    fiunmpoints(0);
    cout << ans;
    return 0;
}
