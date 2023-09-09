#include <bits/stdc++.h>

using namespace std;

const int N = 104;

int n;
bool a[N][N], b[N][N], c[N][N];

bool check() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1 && b[i][j] == 0) {
                return false;
            }
        }
    }
    return true;
}
void rotatemx() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[j][n - 1 - i];
        }
    }

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        a[i][j] = c[i][j];
        }
    }
}
    int main() {
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        if (check()) {
            cout << "Yes";
            return 0;
        }
        rotatemx();
    }
    return 0;
}
