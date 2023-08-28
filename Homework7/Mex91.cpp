#include <bits/stdc++.h>

using namespace std;

const int N = 2004;

int a[N], n, ecount;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 2004; i++) {
        for (int j = 0; j < n; j++) {
                if (a[j] == i) {
                    ecount++;
                }
        }
                if (ecount == 0) {
                    cout << i;
                    break;
                }
                ecount = 0;
    }
    return 0;
}
