#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
using vvvi = vector<vector<vector<ll>>>;
#define p_b push_back
#define all(x) x.begin(), x.end();
const int INF = INT_MAX;
const double eps = 1e-12;

int n, k;

int main() {
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0, f = 0, summ = 0;
    for (int i = 0 ; i < n; i++) {
        while (f < n && summ < k) {
            summ += a[f];
            f++;
        }
        if (summ >= k) {
            ans += (n - f + 1);
        }
        summ -= a[i];
    }
    cout << ans;
    return 0;
}
