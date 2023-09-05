#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 4;

int n, x, a[N], j, z, m, y;
 bool b[N];

int main() {

    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    m = a[x];
    b[m] = 1;
    while (n!=0) {
        y = a[m];
        j++;
        n--;
        if (b[y] == 1) {
            break;
        }
        b[y] = 1;
        m = a[y];
        j++;
        n--;
        if (b[m] == 1) {
            break;
        }
        b[m] = 1;
    }
    cout << j;
    return 0;
}
