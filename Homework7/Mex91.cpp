#include <bits/stdc++.h>

using namespace std;

const int N = 2004;
int a[N], n, minn = 2004, maxx = -1, x;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0 && a[i] < minn) {
            minn = a[i];
        }
        if (a[i] > 0 && a[i] > maxx) {
            maxx = a[i];
        }
    }
    for (int i = 0; i < 2004; i++) {
        for (int j = 0; j < n; j++) {
            if (i != a[j] && i <= maxx) {
                x  == i;
            }
        }
    }

    cout << x;
    return 0;
}
