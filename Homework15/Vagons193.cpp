#include <bits/stdc++.h>

using namespace std;

const int N = 100004;
int n, cnt, a[N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i+1 < n; i++) {
        if (a[i+1] != a[i]+1) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
