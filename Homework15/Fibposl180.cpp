#include <bits/stdc++.h>

using namespace std;

const int N = 100004;
long long n, an, an1, a[N];
int main() {
    cin >> n >> an >> an1;
    a[n] = an;
    a[n+1] = an1;
    while (n!= 0) {
        a[n-1] = a[n+1] - a[n];
        n--;
    }
    cout << a[1] << " " << a[2];
    return 0;
}
