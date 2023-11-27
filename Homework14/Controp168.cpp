#include <bits/stdc++.h>

using namespace std;

const int N = 10004;
int n, a[N], mini = 99999, maxi = -999999;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] <= mini) {
            mini = a[i];
        }
        if (a[i] >= maxi) {
            maxi = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == maxi) {
            a[i] = mini;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
