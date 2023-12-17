#include <bits/stdc++.h>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int t = gcd(n,m);
    for (int i = 0; i < t; i++) {
        cout << 1;
    }
    return 0;
}
