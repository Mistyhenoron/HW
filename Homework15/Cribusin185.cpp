#include <bits/stdc++.h>

using namespace std;

const int N = 100004;
int n, a[N], cnt, sum;
long long s;

int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    for (int i = 0; i < n; i++) {
        if (sum + a[i] <= s) {
            sum += a[i];
            cnt++;
        }
        else {
            break;
        }
    }
    cout << cnt;
    return 0;
}
