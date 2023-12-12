#include <bits/stdc++.h>
 
using namespace std;
 
int n, a[1000000], minn = 99999, m;
 
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        minn = min(minn, a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == minn) {
            m = i;
        }
    }
    for (int i = m; i < n; i++) {
        cout << a[i] << " ";
    }
    for (int i = 0; i < m; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
