#include <bits/stdc++.h>

using namespace std;

const int N = 1004;

int n, a[N], x1, x2, x3, x, maxx = -1004, minn = 1005;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > maxx) {
            maxx = a[i];
        }
        if (a[i] < minn) {
            minn = a[i];
        }
    }
    for (int i = 0; i < n/2; i++) {
        x1 += a[i];
    }
    for (int i = 0; i < n - n/2; i++) {
        x2 += a[i];
    }
    cout << max(max(x1,x2), x3);
    return 0;
}
