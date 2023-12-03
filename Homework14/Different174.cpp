#include <bits/stdc++.h>

using namespace std;

const long long N = 1000004;
long long n, cnt;
vector <long long> a;
bool b[N];

int main() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cnt = 1;
    for (int i = 0 ; i + 1 < n; i++) {
        if (a[i] != a[i+1]) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
