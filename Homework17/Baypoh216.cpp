#include <bits/stdc++.h>
using namespace std;
 
int n, d, a[150000], ans;
 
int main() {
    cin >> n >> d;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int i = 0, j = n - 1;
    while (i <= j) {
        if (a[i] + a[j] <= d) {
            i++;
        }
        j--;
        ans++;
    }
    cout << ans;
    return 0;
}
