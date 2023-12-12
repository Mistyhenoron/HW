#include <bits/stdc++.h>

using namespace std;

int k, p, temp, ans, temp1;

int main() {
    cin >> p >> k;
    for (int i = p; i <= k; i++) {
        temp = i + temp1;
        while (temp != 2) {
            if (temp % 2 == 0) {
                temp/= 2;
                ans++;
            }
            else {
                temp*= 3;
                temp++;
                ans++;
            }
        }
        temp++;
    }
    cout << ans;
    return 0;
}
