#include <bits/stdc++.h>

using namespace std;

long long c;

double bs() {
    long long l = 0, r = 1e18, m;
    while (true) {
        m = (l+r)/2;
        double s =  sqrt(m) + (m*m);
        if (s >= c) {
            r = m;
        }
        else {
            l = m;
        }
        if (m == l || l == r || m == r) {
            break;
        }
    }
    return r;
}

int main() {
    cin >> c;
    double g = bs();
    cout << fixed << setprecision(9) << g;
    return 0;
}
