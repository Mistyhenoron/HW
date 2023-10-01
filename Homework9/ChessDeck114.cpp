#include <bits/stdc++.h>

using namespace std;

int lim, a[10][10], area;

int main() {
    cin >> lim;
    for (int i = 0; i < lim; i++) {
        int b, c;
        cin >> b >> c;
        a[b][c] = 1;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if ((a[i][j] == 1 &&  a[i][j+1] == 0) || (a[i][j] == 0 && a[i][j+1] == 1)) {
                area++;
            }
        }
    }
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < 9; i++) {
            if ((a[j][i] == 1 && a[j][i+1] == 0) || (a[j][i] == 0 && a[j][i+1] == 1)) {
                area++;
            }
        }
    }
    cout << area;
    return 0;
}
