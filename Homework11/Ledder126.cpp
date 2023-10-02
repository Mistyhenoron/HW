#include <bits/stdc++.h>

using namespace std;

int k, x, y;

int main() {
    cin >> k;
    ios::sync_with_stdio();
    cin.tie();
    if (k == 1) {
        cout << 1;
        return 0;
    }
    while (y <= k){
        x++;
        y += x;
     }
    cout << x-1;
    return 0;
}
