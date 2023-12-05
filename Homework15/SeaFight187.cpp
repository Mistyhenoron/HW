#include <bits/stdc++.h>

using namespace std;

const int N = 104;
int n, m, cnt;
char a[N][N];

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++)  {
             if (a[i-1][j] != '*' && a[i+1][j] != '*' && a[i][j+1] != '*' && a[i][j-1] != '*' && a[i][j] != '*') {
                 cnt++;
             }
         }
    }
    cout << cnt;
    return 0;
}
