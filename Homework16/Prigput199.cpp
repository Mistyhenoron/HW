#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 4;
int ans = 0, n, xb, yb, l, a[N][2], f, s;

double dist(int x1, int y1, int x2, int y2) {
    return sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1))); // формула вычисления расстояния
}

int main() {
    cin >> n >> xb >> yb >> l; // ввод
    for (int i = 0; i < n; i++) {
            cin >> f >> s;
            if (l >= dist(xb, yb, f, s)) {
                cout << i+1;
                return 0;
            }
    }
    cout << "Yes";
    return 0;
}
