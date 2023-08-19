#include <bits/stdc++.h>

using namespace std;

int n, q;
const int N = 2e5 + 4;
vector <int> a[N];

int main() {
    cin >> n >> q;
    for (int i = 1; i <=n; i++) {
        int l;
        cin >> l;
        a[i].resize(l);
        for (int j = 1; j <= l; j++){
            cin >> a[i][j];
        }

    }
    for (int i = 1; i <= q; i++) {
        int s, t;
        cin >> s >> t;
        cout << a[s][t] << "\n";
    }
  
    return 0;
}
