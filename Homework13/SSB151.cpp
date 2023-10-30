#include <bits/stdc++.h>

using namespace std;

double x, y, r, v, x2, y2, r2, v2, d;

int main() {
    cin >> x >> y >> r >> v >> x2 >> y2 >> r2 >> v2;
    double p1, p2;
    p1 = ((x2 - x)*(x2 - x));
    p2 = ((y2 - y)*(y2 - y));
    d = sqrt(p1+p2);
    double t = (d - r - r2)/v2 + v;
    cout << fixed << setprecision(6) << t;
    return 0;
}

НЕ ПАШЕТ :(

*************************************************************************
