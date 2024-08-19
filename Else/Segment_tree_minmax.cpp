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
