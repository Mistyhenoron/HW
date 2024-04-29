#include <bits/stdc++.h>
 
using namespace std;
 
int res, n, k;
vector <pair<int, int>> maga;
 
bool check2(int r1, int c1, int r2, int c2) {
    if (r1 == r2 || c1 == c2) {
        return false;
    }
    if (abs(r1 - r2) == abs(c1 - c2)) {
        return false;
    }
     
    int mn = min(abs(r1 - r2), abs(c1 - c2));
    int mx = max(abs(r1 - r2), abs(c1 - c2));
     
    if (mn == 1 && mx == 2) {
        return false;
    }
    return true;
}
 
bool check(int r, int c) {
    for (auto[y, x] : maga) {
        if (!check2(r, c, y, x)) {
            return false;
        }
    }
    return true;
}
 
void bt(int r) {
    if (r == n) {
        res += maga.size() == k;
        return;
    }
    bt(r+1);
    for (int c = 0; c < n; c++) {
        if (maga.size() < k && check(r, c)) {
            maga.emplace_back(r,c);
            bt(r+1);
            maga.pop_back();
        }
    }
}
 
int main() {
    cin >> n >> k;
    bt(0);
    cout << res;
    return 0;
}
