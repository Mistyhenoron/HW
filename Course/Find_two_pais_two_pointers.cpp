#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vvi = vector<vector<ll>>;
using vvvi = vector<vector<vector<ll>>>;
#define p_b push_back
const int INF = INT_MAX;
const double eps = 1e-12;
int n, m;

int main() {
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    vi b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int f1 = 0, f2 = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        while (f1 < m && b[f1] < a[i]) {
            f1++;
        }
        while (f2 < m && b[f2] <= a[i]) {
            f2++;
        }
        ans += (f2 - f1);
    }
    cout << ans;
    return 0;
}
