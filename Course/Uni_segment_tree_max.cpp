#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;

struct Node {
    int maxx, cnt;
    Node() : maxx(0), cnt(0) {}
    Node(int maxx, int cnt) : maxx(maxx), cnt(cnt) {}
};

const int MAXN = 1e5 + 5;
ll a[MAXN];
Node t[4*MAXN];

Node unite(const Node& a, const Node& b) {
    if (a.maxx == b.maxx) {
        return Node(a.maxx, a.cnt + b.cnt);
    } else if (a.maxx > b.maxx) {
        return a;
    } else {
        return b;
    }
}

void build(int v, int l, int r) {  
    if (l == r - 1) { 
        t[v] = Node(a[l], 1);
        return;
    }
    int m = (l + r) / 2;
    build(2 * v + 1, l, m);
    build(2 * v + 2, m, r);
    t[v] = unite(t[2 * v + 1], t[2 * v + 2]); 
}

Node ask(int v, int l, int r, int askl, int askr) {
    if (l >= askr || r <= askl) {
        return Node(INT_MIN, 0);
    }
    if (l >= askl && r <= askr) { 
        return t[v];
    }
    int m = (l + r) / 2;
    return unite(ask(2 * v + 1, l, m, askl, askr), ask(2 * v + 2, m, r, askl, askr)); 
}

void change(int v, int l, int r, int pos, ll val) {
    if (l == r - 1) { 
        t[v] = Node(val, 1);
        return;
    }
    int m = (l + r) / 2;
    if (pos < m) {
        change(2 * v + 1, l, m, pos, val);
    } else {
        change(2 * v + 2, m, r, pos, val);
    }
    t[v] = unite(t[2 * v + 1], t[2 * v + 2]);
}

int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    build(0, 0, n);
    
    for (int i = 0; i < q; ++i) {
        char type;
        cin >> type;
        if (type == 'U') { 
            int idx;
            ll new_val;
            cin >> idx >> new_val;
            --idx; 
            change(0, 0, n, idx, new_val);
        } else if (type == 'Q') { =
            int l, r;
            cin >> l >> r;
            --l; --r; =
            Node result = ask(0, 0, n, l, r + 1);
            cout << result.maxx << ' ' << result.cnt << endl;
        }
    }
    return 0;
}
