#include <bits/stdc++.h>

using namespace std;

int k, ans;

int perevorot(int k) {
    int ans1 = 0;
    while (k != 0) {
        ans1 = ans1*10 + k%10;
        k/= 10;
    }
    return ans1;
}

int main() {
    cin >> k;
    for (int i = 1; i <= k; i++) {
        if (i + perevorot(i) == k) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
