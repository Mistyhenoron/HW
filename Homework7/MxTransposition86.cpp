#include <bits/stdc++.h>

using namespace std;

const long long N = 10000;
long long h, w;
vector<vector<int>> a, b;
int main() {
    cin >> h >> w;
    a.resize(h, vector<int>(w));
    b.resize(w, vector<int>(h));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
