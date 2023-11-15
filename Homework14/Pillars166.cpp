#include <bits/stdc++.h>

using namespace std;

const long long N = 204;
long long x, n, a[N][N];

int main() {
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < n; j++) {
            long long temp = 0;
        for (int i = 0; i < n; i++) {
            if (a[i][j] == x) {
                cout << "YES" << "\n";
            }
            else {
                temp++;
            }
        }
        if (temp == n) {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
