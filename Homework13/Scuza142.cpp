#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
using vvvi = vector<vector<vector<ll>>>;
#define p_b push_back
const int INF = INT_MAX;
int n, k, t;
vi a, reqs, prefa;

void bp(int req) {
    int l = -1, r = n, m;
    if (prefa[0] > req) {
        cout << 0 << " ";
    }
    while (l + 1 < r) {
        m = (l+r)/2;
        if (a[m] >= req) {
            r = m;
        } else {
            l = m;
        }
    }
    int ans = prefa[r];
    cout << ans << " ";
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> k;
        a.resize(n);
        reqs.resize(k);
        prefa.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 1) {
                prefa[i] += a[i-1] + a[i];
            } else if (i > 1) {
                prefa[i] += prefa[i-1] + a[i];
            }
        }
        prefa[0] = a[0];
        for (int i = 0 ; i < k; i++) {
            int req;
            cin >> req;
            bp(req);
        }
        cout << endl;
    }
    return 0;
}
