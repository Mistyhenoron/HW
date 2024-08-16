#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vvvi = vector<vector<vector<int>>>;
#define p_b push_back
const int INF = INT_MAX;
const double eps = 1e-12;
const int mod = 1073741824;

int n;
vi a, logs;

// реализация spars'ов
int main() {
    cin >> n;
    a.resize(n+1);
    logs.resize(n+1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    logs[1] = 0;
    for (int i = 2; i <= n; i++) {
        logs[i] = logs[i/2] + 1;
    }
    vvi sparse(logs[n] + 1, vi(n+1));
    for (int i = 0; i < n; i++) {
        sparse[0][i] = a[i];
    }
    for (int level = 0; (1 << level) <= n; level++) {
        for (int i = 0; i + (1 << level) <= n; i++) {
            sparse[level][i] = min(sparse[level-1][i], sparse[level-1][i+(1 << level)]);
        }
    }
    int l, r;
    cin >> l >> r;
    l--, r--;
    int level = logs[r-l+1];
    cout << min(sparse[level][l], sparse[level][r-(1<<level)+1]);
    return 0;
}
