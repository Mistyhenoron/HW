#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;

const int MAXN = 1e5 + 5;
ll a[MAXN];
ll t[4*MAXN];

void build(int v, int l, int r) {  
    if (l == r - 1) { 
        t[v] = (a[l] == 0 ? 1 : 0); 
        return;
    }
    int m = (l + r) / 2;
    build(2 * v + 1, l, m);
    build(2 * v + 2, m, r);
    t[v] = t[2 * v + 1] + t[2 * v + 2]; 
}

ll ask(int v, int l, int r, int askl, int askr) {
    if (l >= askr || r <= askl) {
        return 0;
    }
    if (l >= askl && r <= askr) { 
        return t[v];
    }
    int m = (l + r) / 2;
    return ask(2 * v + 1, l, m, askl, askr) + ask(2 * v + 2, m, r, askl, askr); 
}

int getk(int v, int l, int r, int k) {
     if (l == r-1) {
         return l;
     }
     int m = (l+r)/2;
     if (t[2*v+1] > k) {
         return getk(t[2*v+1], l, m, k);
     } else {
         return getk(t[2*v+2], m, r, k-t[2*v+1]);
     }
} // спуск

void change(int v, int l, int r, int pos, ll val) {
    if (l == r - 1) { 
        t[v] = (val == 0 ? 1 : 0);
        return;
    }
    int m = (l + r) / 2;
    if (pos < m) {
        change(2 * v + 1, l, m, pos, val);
    } else {
        change(2 * v + 2, m, r, pos, val);
    }
    t[v] = t[2 * v + 1] + t[2 * v + 2];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, q;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    build(0, 0, n); 
    cin >> q;
    for (int i = 0; i < q; i++) {
        /*
        string type;
        cin >> type;
        if (type == "s") {
            int l, r;
            cin >> l >> r;
            cout << ask(0, 0, n, l - 1, r) << " ";
        } else {
            int pos, val;
            cin >> pos >> val;
            change(0, 0, n, pos - 1, val);
        }
    }
    cout << endl; 
    */
    return 0;
}
