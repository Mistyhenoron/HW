#include <bits/stdc++.h>

using namespace std;

const int N = 1004;
int n, m, a[N][N],minn[N], maxx[N], mini = 99999, maxi = -999999, cnt;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] <= mini) {
                mini = a[i][j];
                minn[i] = a[i][j];
            }
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (a[j][i] >= maxi) {
                maxi = a[i][j];
                maxx[j] = a[j][i];
            }
        }
    }
    for (int i = 0;  i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == minn[i]  && a[i][j] == maxx[j]) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}

