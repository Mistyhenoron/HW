#include <bits/stdc++.h>

using namespace std;

const int N = 1004, INF = 10000;

int n, m, a[N][N],
maxx = -INF, minn = INF, max2 = -INF, min2 = INF;
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
        minn = INF;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j][i] > maxx) {
                maxx = a[j][i];
            }
        }
        uchmax.push_back(maxx);
        maxx = -INF;
    }
    cout << *max_element(uchmin.begin(), uchmin.end()) << " ";
    cout << *min_element(uchmax.begin(), uchmax.end());
    return 0;
}

