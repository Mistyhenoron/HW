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

ll n, q;
const ll N = 1e5 + 7;
ll a[N], t[4*N];

void build (int v, int l, int r) {
    if (l == r-1) {
        t[v] = a[l];
        return;
    }
    ll m = (l+r)/2;
    build(2*v+1, l, m);
    build(2*v+2, m, r);
    t[v] = max(t[2*v+1], t[2*v+2]);
}

ll treemax(int v, int l, int r, int askl, int askr) {
    if (l >= askr || r <= askl) {
        return LLONG_MIN;
    }
    if (l >= askl && r <= askr) {
        return t[v];
    }
    ll m = (l+r)/2;
    return  max(treemax(2*v+1, l, m, askl, askr), treemax(2*v+2, m, r, askl, askr));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) { 
        cin >> a[i];
    }
    build(0, 0, n);
    cin >> q;
    vi ans;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        ans.p_b(treemax(0, 0, n, l-1, r));
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
