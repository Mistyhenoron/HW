#include <bits/stdc++.h>

using namespace std;

const int N = 1004;
int n, a[N], b[N], m[N][N], x, y;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[0][i] == a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        m[1][i] == b[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (m[i+1][j] == m[i][j]) {
            x++;
            break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (b[j] == a[i]) {
                y++;
            }
        }
    }
    cout << x << "\n" << y - x;
    return 0;
}
