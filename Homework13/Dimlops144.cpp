
#include <bits/stdc++.h>

using namespace std;

long long n, h, w;

long long bs(long long w, long long h, long long n) {
    long long l = 0, r = 1e18;
    while (l + 1 < r) {
        long long m = (l + r)/2;
        double s = (double)(m/w) * (m/h);
        if (s >= n) {
            r = m;
        }
        else {
            l = m;
        }
    }
    return r;

}


int main() {
    cin >> w >> h >> n;
    long long g = bs(w, h, n);
    cout << g;
    return 0;
}
