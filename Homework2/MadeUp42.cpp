#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;
int n, a[N], b[N], c[N], cnt;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i] == b[c[j]]) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
