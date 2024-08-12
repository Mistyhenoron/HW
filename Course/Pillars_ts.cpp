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
int n, a, b;
vi h;

ll f (ll m) {
    ll ans = 0;
    for (auto i : h) {
        if (i > m) {
            ans+= (i - m) * a;
        } else {
            ans += (m - i) * b;
        }
    }
    return ans;
}  

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> a >> b;
    h.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    ll l = 0, r = *max_element(h.begin(), h.end());
    while (l < r-2) { // чтобы не перескочить через нужный ответ
        ll m1 = l + (r-l)/3;
        ll m2 = m1 + (r-l)/3;
        if (f(m1) > f(m2)) {
            l = m1;
        } else {
            r = m2;
        }
    }
    int opt = l;
    for (int i = l + 1; i <= l + 2; i++) {
        if (f(i) < f(opt)) {
            opt = i;
        }
    }
    cout << f(opt);
    return 0;
} 
