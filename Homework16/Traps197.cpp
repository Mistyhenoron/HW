#include <bits/stdc++.h>

using namespace std;

const int N = 14;
int n, a[N][N];
double ans;

double dist(int x1, int y1, int x2, int y2) {
    return sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
}

int main() {
    cin >> n;
      for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> a[i][j];
            }
        }
    if (n >= 2) {
        for (int i = 0; i+1 < n; i++) {
            for (int j = 0; j+1 < 2; j++) {
                    ans += dist(a[i][j], a[i][j+1], a[i+1][j], a[i+1][j+1]);
            }
        }
    }
    ans += dist(0, 0, a[0][0], a[0][1]);
    ans += dist(0, 0, a[n-1][0], a[n-1][1]);
    cout << fixed << setprecision(3) << ans;
    return 0;
}
