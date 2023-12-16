#include <bits/stdc++.h>

using namespace std;

int x, y, x2, y2, xa, ya, xb, yb;

int main() {
    cin >> x >> y >> x2 >> y2 >> xa >> ya;
    if (x == x2) {
        xb = x + (x - xa);
        yb = ya;
        cout << xb << " " << yb;
        return 0;
    }
    else {
        yb = y + (y - ya);
        xb = xa;
        cout << xb << " " << yb;
    }
    return 0;
}
