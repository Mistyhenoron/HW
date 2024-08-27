#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;


const int MAXN = 1e5 + 5;
ll a[MAXN];
int t[4*MAXN];
int c[4*MAXN];

void push(int v) {
    c[2*v+1] += c[v];
    c[2*v+1] += c[v];
    c[v] = 0;
}

void build(int v, int l, int r) {  
    if (l == r - 1) { 
        t[v] = a[l];
        return;
    }
    int m = (l + r) / 2;
    build(2 * v + 1, l, m);
    build(2 * v + 2, m, r);
    t[v] = t[2*v+1] + t[2*v+2];
}

void update (int v, int l, int r, int m) {
    t[v] = t[2*v+1] + t[2*v+2] + c[2*v+1]*(m-l) + c[2*v+2]*(r-m);
    // t[v] = min(t[2*v+1] + c[2*v+1], t[2*v+2]+c[2*v+2]);
}

int ask(int v, int l, int r, int askl, int askr) {
    if (l >= askr || r <= askl) {
        return 0;
    }
    if (l >= askl && r <= askr) {
        return t[v] + c[v] *(r-l);
    }
    push(v);
    int m = (l+r)/2;
    int x = ask(2*v+1, l, m, askl, askr);
    int y = ask(2*v+2, m ,r, askl, askr);
    update(v, l, r, m);
    return x + y;
}

void change(int v, int l, int r, int askl, int askr, int val) {
    if (l >= askr || r <= askl) {
        return;
    }
    if (l >= askl && r <= askr) {
        c[v] += val;
        return;
    }
    push(v);
    int m = (l+r)/2;
    change(2*v+1, l, m, askl, askr, val);
    change(2*v+2, m, r, askl, askr, val);
    update(v, l, r, m);
}

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
     
    }
    return 0;
}
