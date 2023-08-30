#include <bits/stdc++.h>

using namespace std;

int n,x;
const int N = 4e5;
int a[4*N], cnt[N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (cnt[i] == 3) {
            cout << i;
            break;
        }
    }
    return 0;
}
