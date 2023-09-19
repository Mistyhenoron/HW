#include <bits/stdc++.h>

using namespace std;

const int N = 104;

int h, w, n, a[N][N];

int main() {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            a[i][j] == 0;
        }
    }
    cin >> h >> w >> n;
    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i != x2-1; i++) {
            for (int j = y1; i != y2-1; i++) {
                a[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << a[i][j];
        }
    }

    return 0;
}
