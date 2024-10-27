#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;

vector<pair<int, int>> dinos;
vi indexes;

bool cmp(int f, int s) {
    if (dinos[f].first != dinos[s].first) {
        return dinos[f].first < dinos[s].first;
    } else {
        return dinos[f].second < dinos[s].second; 
    }
}

int main() {
    int n;
    cin >> n;
    dinos.resize(n+1);
    indexes.resize(n);
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        dinos[i] = {a, b};
    }
    for (int i = 0; i < n; i++) {
        indexes[i] = i+1;
    }
    sort(indexes.begin(), indexes.end(), cmp);
    cout << n-1 << endl;
    for (int i = 0; i < n-1; i++) {
        cout << indexes[i] << " " << indexes[i+1] << endl;
    }
    return 0;
}
