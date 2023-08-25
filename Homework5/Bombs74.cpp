#include <bits/stdc++.h>

using namespace std;

const int R = 24, C = 24;
int r, c;
char a[R][C], b[R][C];
int main() {
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >>  a[i][j];
            b[i][j] = a[i][j];
        }
    }
for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
        if (a[i][j] == '#' && a[i][j] == '.') {
                 continue;
        }
        int d  = a[i][j] - '0';
            for(int  y = 0; y < r; y++) {
                for (int x = 0; x < c; x++) {
                    if (abs(y - i) + abs(x - j) <= d) {
                        b[y][x] == '.';
                    }
                }
            }
        }
    }


    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << b[i][j];
        }
        cout << "\n";
    }
    return 0;
}
