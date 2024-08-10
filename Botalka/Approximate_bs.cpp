#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
using vvvi = vector<vector<vector<ll>>>;
#define p_b push_back
const int INF = INT_MAX;
vi a, b;

int bp (int x) {
    int l = 0, r = a.size(), m;
    while (l + 1 < r) {
        m = (l+r)/2;
        if (a[m] >= x) {
            r = m;
        } else {
            l = m;
        }
    }
    int ans = a[r];
    if ((abs(x-a[r])) >= abs(x-a[l])) {
        ans = a[l];
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        cout << bp(x) << endl;
    }
    return 0;
}
