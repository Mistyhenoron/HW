#include <bits/stdc++.h>

using namespace std;

const int N = 1004;
int n, cnt1, cnt2, a[N], b[N], c[N];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b[i] = a[i];
            cnt1++;
        }
        else {
            c[i] = a[i];
            cnt2++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (c[i] > 0) {
            cout << c[i] << " ";
        }
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        if (b[i] > 0) {
            cout << b[i] << " ";
        }
    }
    cout << "\n";
    if (cnt1 >= cnt2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
