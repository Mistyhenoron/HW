#include <bits/stdc++.h>

using namespace std;

const int N = 104;
int n, a[N][N], cnt;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                a[j][i] = 0;
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
