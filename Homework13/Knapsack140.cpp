#include <bits/stdc++.h>
 
using namespace std;
 
long long n, W, w[100], p[100], ansp;
vector <long long> ans, path;
 
void bt(long long cnt, long long sumw, long long sump) {
    if (sumw > W) {
        return;
    }
    if (cnt == n) {
        if (ansp < sump) {
            ansp = sump;
            ans = path;
        } else if (ansp == sump) {
            if (path.size() < ans.size() || (path.size() == ans.size() && path < ans)) {
                ans = path;
            }
        }
        return;
    }
    bt(cnt + 1, sumw, sump);
    path.push_back(cnt);
    bt(cnt + 1, sumw + w[cnt], sump + p[cnt]);
    path.pop_back();
}
 
int main(){
    cin >> n >> W;
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> p[i];
    }
    bt(0, 0, 0);
    cout << ans.size() << " " << ansp << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] + 1 << " ";
    }
    return 0;
}
