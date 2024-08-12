#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<long double>;
using vvi = vector<vector<ll>>;
using vvvi = vector<vector<vector<ll>>>;
using ld = long double;
#define p_b push_back
const int INF = INT_MAX;
const double eps = 1e-12;
int n;
vi x, v;

ld f(ld m) {
    vi pos(n);
    for (int i = 0; i < n; i++) {
        pos[i] = x[i] + v[i]*m;
    }
    return *max_element(pos.begin(), pos.end()) - *min_element(pos.begin(), pos.end());
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    x.resize(n);
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> v[i];
    }
    double l = 0, r = 1e14;
    for (int it = 0; it < 500; it++) {
        ld m1 = l + (r-l)/3;
        ld m2 = m1 + (r-l)/3;
        if (f(m1) < f(m2)) {
            r = m2;
        } else {
            l = m1;
        }
    }
    cout << fixed << setprecision(6) << l << " " << f(l);
   return 0;
}
