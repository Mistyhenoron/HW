#include <bits/stdc++.h>

using namespace std;

int n, w, sumpol = -99999, numeric;
vector <int> pathans, path, allweight, allpol;

void bt(int totalweight, int totalpol, int cnt) {
    if (cnt == n) {
        sumpol = max(sumpol, totalpol);
        numeric = cnt;
        pathans = path;
        return;
    }
        bt(totalweight, totalpol, cnt+1);
        if (totalweight + allweight[cnt] <= w) {
            bt(totalweight + allweight[cnt], totalpol + allpol[cnt], cnt+1);
            path.push_back(cnt+1);
        }
}

int main(){
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        int f, s;
        cin >> f >> s;
        allweight.push_back(f);
        allpol.push_back(s);
    }
    bt(0,0,0);
    cout << numeric << " " << sumpol << endl;
    for (int i = 0; i < pathans.size(); i++) {
        cout << pathans[i] << " ";
    }
    return 0;
}
