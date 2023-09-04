#include <bits/stdc++.h>

using namespace std;

int a, b, k, ak, n, x, y;

int main() {
    cin >> k >> a >> b;
    ak = a;
    while (ak > 0) {
        ak/=10;
        n++;
    }
    while (n >= 0) {
        x += n/((n-1)*10) * pow(k,n-1);
        y += n/((n-1)*10) * pow(k,n-1);
    }
    cout << x*y;
    return 0;
}

