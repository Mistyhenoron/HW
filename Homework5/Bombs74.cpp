
#include <bits/stdc++.h>

using namespace std;

int r, c, z;
char a[100][100];
int mn() {
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >>  a[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 1) {
                a[i][j] == '.';
                a[i-1][j] == '.';
                a[i+1][j] == '.';
                a[i][j-1] == '.';
                a[i][j+1] == '.';
            }
            else if (a[i][j] == 2) {
                a[i][j] == '.';
                a[i-1][j] == '.';
                a[i+1][j] == '.';
                a[i][j-1] == '.';
                a[i][j+1] == '.';
                a[i-2][j] == '.';
                a[i+2][j] == '.';
                a[i][j+2] == '.';
                a[i][j-2] == '.';
                a[i-1][j-1] == '.';
                a[i+1][j-1] == '.';
                a[i+1][j+1] == '.';
                a[i-1][j+1] == '.';
            }
            else if (a[i][j] == 3) {
                a[i][j] == '.';
                a[i-1][j] == '.';
                a[i+1][j] == '.';
                a[i][j-1] == '.';
                a[i][j+1] == '.';
                a[i-2][j] == '.';
                a[i+2][j] == '.';
                a[i][j+2] == '.';
                a[i][j-2] == '.';
                a[i-1][j-1] == '.';
                a[i+1][j-1] == '.';
                a[i+1][j+1] == '.';
                a[i-1][j+1] == '.';
                a[i+3][j] == '.';
                a[i-3][j] == '.';
                a[i][j-3] == '.';
                a[i][j+3] == '.';
                a[i-1][j-2] == '.';
                a[i-2][j-1] == '.';
                a[i-2][j+1] == '.';
                a[i-1][j+2] == '.';
                a[i+1][j-2] == '.';
                a[i+2][j-1] == '.';
                a[i+2][j+1] == '.';
                a[i+1][j+2] == '.';
            }
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}
