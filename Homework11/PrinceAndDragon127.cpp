#include <bits/stdc++.h>
 
using namespace std;
 
int n, m, k, cnt = 1;
 
int main() {
    ios::sync_with_stdio();
    cin.tie();
    cin >> n >> m >> k;
    if (m - n <= 0) {
        cout << 1;
    }
    else if (-n + k >= 0) {
        cout << "NO";
        return 0;
    }
    else {
        cout << (((m - n) + (n - k) - 1) / (n - k)) + 1;
    }
    return 0;
}
