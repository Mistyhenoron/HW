#include <bits/stdc++.h>

using namespace std;

const int N = 1004;

int n, m, a[N][N], maxx = -10000, minn = 10000, max2 = -10000, min2 = 10000;
vector <int> uchmax, uchmin;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] < minn) {
                minn = a[i][j];
            }
        }
        uchmin.push_back(minn);
        minn = 10000;
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (a[j][i] > maxx) {
                maxx = a[j][i];
            }
        }
        uchmax.push_back(maxx);
        maxx = -10000;
    }

    for (int i = 0; i < n; i++) {
        if (uchmax[i] <min2) {
            min2 = uchmax[i];
        }
        if (uchmin[i] > max2) {
            max2 = uchmin[i];
        }
    }
    cout << max2 << " " << min2;

    return 0;
}
