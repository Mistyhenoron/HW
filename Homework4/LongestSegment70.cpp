#include <bits/stdc++.h>

using namespace std;

const int N = 104;
int n, a[N][2];
double maxx = 0;

double d(int i, int j) {
    double xi = a[i][0];
    double yi = a[i][1];
    double xj = a[j][0];
    double yj = a[j][1];
    double dx = abs(xi - xj);
    double dy = abs(yi - yj);
    return sqrt (dx*dx + dy*dy);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            double dist = d(i, j);
            maxx = max(maxx, dist);
        }
    }
    cout << fixed << setprecision(15) << maxx;
    return 0;
}
