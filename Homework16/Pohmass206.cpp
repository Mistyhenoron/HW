#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1e5 + 4;
int n, m, a[N], b[N];
set <int> c, d;
 
int main() {
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        c.insert(b[i]);
    }
    for (int i = 0; i < n; i++) {
        d.insert(a[i]);
    }
    if (c == d) {
        cout << 1;
        return 0;
    }
    cout << 0;
    return 0;
}
