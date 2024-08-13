#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
using vvvi = vector<vector<vector<ll>>>;
#define p_b push_back
const int INF = INT_MAX;
const double eps = 1e-12;
int n, k;
vi x;


int main() {
    cin >> n >> k;
    x.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    ll ans = 0;
    int f = 0;
    for (int i = 0; i < n; i++) {
        while (f < n && x[f] - x[i] < k) { // за O(2n) -> O(n) тк суммарно во втором цикле n операций
            f++;
        }
        ans += (n - f);
    }
    cout << ans;
    return 0;
}
