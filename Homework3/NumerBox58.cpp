#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;
long long n, ed = 1;
vector <> b;
vector <vector<int>> a;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != 1 && j != n-1) {
                b.push_back(a[i][j]);
            }
            else if (j == n-1) {
                b.push_back(ed);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
        }
    }
    return 0;
}

