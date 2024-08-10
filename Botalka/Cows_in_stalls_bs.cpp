#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<ll>;
using vvi = vector<vector<ll>>;
using vvvi = vector<vector<vector<ll>>>;
#define p_b push_back
const int INF = INT_MAX;
vi stalls;
int n, k;

bool check(int mid) {
    int cnt = 1, last_stall = stalls[0];
    for (int i = 1; i < n; i++) {
        if (last_stall + mid > stalls[i]) {
            continue;
        } else {
            cnt++;
            last_stall = stalls[i];
        }
    }
    return cnt >= k;
}


int bp() {
    int l = 0, r = 1e9, mid_length;
    while (l + 1 < r) {
        mid_length = (l+r)/2;
        if (check(mid_length)) {
            l = mid_length;
        } else {
            r = mid_length;
        }
    }
    return l;
}

int main() {
    cin >> n >> k;
    stalls.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }
    cout << bp();
    return 0;
}
