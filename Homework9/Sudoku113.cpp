#include <bits/stdc++.h>

using namespace std;

const int N = 107;

int n, a[N][N];

string check(vector <int> b) {
    bool d[N];
    for (int i = 0; i < n*n; i++) {
        d[i] = 1;
    }
    for (int i = 0; i < n*n; i++) {
        if (d[i] == 0) {
            return "Incorrect";
        }
    }

}

int main() {
    for (int i = 0; i < n*n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
        }
    }

        for (int i = 0; i < n*n; i++) {
            for (int j = 0; j < n*n; j++) {
                vector <int> b;
                b.push_back(a[i][j]);
            }
            if (check) {
                return 0;
                }
            }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            vector <int> b;
            b.push_back(a[j][i]);
        }
        if (check) {
            return 0;
        }
    }

    return 0;
}
