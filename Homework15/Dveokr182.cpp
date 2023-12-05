#include <bits/stdc++.h>

using namespace std;

double x, y, x2, y2, r, r2;

int main() {
    cin >> x >> y >> r >> x2 >> y2 >> r2;
    double t = sqrt(((x2 - x)*(x2 - x)) + ((y2 - y)*(y2 - y)));
    if (t + r >= r2 && r + r2 >= t && t + r2 >= r) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
