#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int x = 1e5 + 5;
ll a[x];
ll minTree[4*x];
ll maxTree[4*x];

void build(int v, int l, int r) {
    if (l == r - 1) {
        minTree[v] = maxTree[v] = a[l];
        return;
    }
    int m = (l + r) / 2;
    build(2*v + 1, l, m);
    build(2*v + 2, m, r);
    minTree[v] = min(minTree[2*v + 1], minTree[2*v + 2]);
    maxTree[v] = max(maxTree[2*v + 1], maxTree[2*v + 2]);
}

pair<ll, ll> query(int v, int l, int r, int askl, int askr) {
    if (l >= askr || r <= askl) {
        return {LLONG_MAX, LLONG_MIN};
    }
    if (l >= askl && r <= askr) {
        return {minTree[v], maxTree[v]};
    }
    int m = (l + r) / 2;
    auto leftQuery = query(2*v + 1, l, m, askl, askr);
    auto rightQuery = query(2*v + 2, m, r, askl, askr);
    return {
        min(leftQuery.first, rightQuery.first),
        max(leftQuery.second, rightQuery.second)
    };
}

void update(int v, int l, int r, int pos, ll val) {
    if (l == r - 1) {
        minTree[v] = maxTree[v] = val;
        return;
    }
    int m = (l + r) / 2;
    if (pos < m) {
        update(2*v + 1, l, m, pos, val);
    } else {
        update(2*v + 2, m, r, pos, val);
    }
    minTree[v] = min(minTree[2*v + 1], minTree[2*v + 2]);
    maxTree[v] = max(maxTree[2*v + 1], maxTree[2*v + 2]);
}

ll binpow(ll a, ll b) {
    ll result = 1;
    while (b) {
        if (b & 1) result *= a;
        a *= a;
        b >>= 1;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    for (int i = 1; i <= 100000; ++i) {
        a[i] = (binpow(i, 2) % 12345) + (binpow(i, 3) % 23456);
    }

    build(0, 1, 100001);

    while (k--) {
        int xi, yi;
        cin >> xi >> yi;

        if (xi > 0) {
            auto result = query(0, 1, 100001, xi, yi + 1);
            cout << result.second - result.first << '\n';
        } else {
            xi = -xi;
            update(0, 1, 100001, xi, yi);
        }
    }

    return 0;
}

-------------------------------------------------------------------------------------------------------------------------
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

const ll N = 1e5;
ll a[N], treemax[4*N], treemin[4*N];
int k;

ll binpow(ll a, ll b) {
    if (b == 0) return 1;
    ll temp = binpow(a, b / 2);
    temp = temp * temp;
    if (b % 2 != 0) temp *= a;
    return temp;
}

void build(int v, int l, int r) {
    if (l == r - 1) {
        treemin[v] = treemax[v] = a[l];
        return;
    }
    int m = (l + r) / 2;
    build(2 * v + 1, l, m);
    build(2 * v + 2, m, r);
    treemin[v] = min(treemin[2 * v + 1], treemin[2 * v + 2]);
    treemax[v] = max(treemax[2 * v + 1], treemax[2 * v + 2]);
}

pair<ll, ll> minmax(int v, int l, int r, int askl, int askr) {
    if (l >= askr || r <= askl) {
        return {LLONG_MAX, LLONG_MIN};
    }
    if (l >= askl && r <= askr) {
        return {treemin[v], treemax[v]};
    }
    int m = (l + r) / 2;
    auto left = minmax(2 * v + 1, l, m, askl, askr);
    auto right = minmax(2 * v + 2, m, r, askl, askr);
    return {min(left.first, right.first), max(left.second, right.second)};
}

void change(int v, int l, int r, int pos, int val) {
    if (l == r - 1) {
        treemin[v] = treemax[v] = val;
        return;
    }
    int m = (l + r) / 2;
    if (pos < m) {
        change(2 * v + 1, l, m, pos, val);
    } else {
        change(2 * v + 2, m, r, pos, val);
    }
    treemin[v] = min(treemin[2 * v + 1], treemin[2 * v + 2]);
    treemax[v] = max(treemax[2 * v + 1], treemax[2 * v + 2]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> k;
    for (int i = 0; i < N; ++i) {
        a[i] = (binpow(i + 1, 2) % 12345) + (binpow(i + 1, 3) & 23456);
    }
    build(0, 0, N);
    while (k--) {
        int xi, yi;
        cin >> xi >> yi;
        if (xi > 0) {
            auto ans = minmax(0, 0, N, xi - 1, yi);
            cout << ans.second - ans.first << endl;
        } else {
            xi = -xi - 1;
            change(0, 0, N, xi, yi);
        }
    }
    return 0;
}

// где ошибка
