#include <bits/stdc++.h>

using namespace std;

int x, x2, y, y2;

int main() {
    cin >> x >> y >> x2 >> y2;
    cout << fixed << setprecision(5) << sqrt(((x2 - x)*(x2 - x)) + ((y2 - y)*(y2 - y)));
    return 0;
}
