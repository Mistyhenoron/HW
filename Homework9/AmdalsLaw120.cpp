#include <bits/stdc++.h>

using namespace std;

int n;
double p, ans;

int main() {
    cin >> n >> p;
    p /= 100;
    ans = n/(n*p+1-p);
    cout << fixed << setprecision(9) << ans;
    return 0;
}
