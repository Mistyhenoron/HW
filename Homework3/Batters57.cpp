#include <bits/stdc++.h>

using namespace std;

const int N = 104;
int n, a[N], p, b[5];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] > 3 && b[1] == 1)   {
            p++;
        }
        else if (a[i] <= 3) {
            b[a[i]] == 1;
        }
        if (a[i] > 2 && b[2] == 1) {
            p++;
        }
        else if (a[i] <= 2) {
            b[a[i]] == 1;
        }
        if (a[i] > 1 && b[3] == 1) {
            p++;
        }
        else if (a[i] <= 1) {
            b[a[i]] == 1;
        }
        if (a[i] > 0 && b[4] == 1) {
            p++;
        }
    }
    cout << p;
    return 0;
}
