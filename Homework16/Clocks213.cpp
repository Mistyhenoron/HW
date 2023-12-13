#include <bits/stdc++.h>

using namespace std;

int a, b, c, d, ans;

int main() {
    cin >> a >> b >> c >> d;
    while (a != c || b != d) {
        if (b == 30) {
            ans++;
        }
        if (b == 60) {
            a++;
            b = 0;
            if (a > 12) {
                ans+= a - 12;
            }
            else {
                ans += a;
            }
            if (a == 24) {
                a = 0;
            }
        }
        b++;
    }
    cout << ans;
    return 0;
}
