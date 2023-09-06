#include <bits/stdc++.h>

using namespace std;

int d, x, y;
double xy;

int main() {
    cin >> xy;
    d = xy*10 + 0.5;
    y = d % 10;
    x = d/10;
    if (y == 0 || y  == 1 || y == 2) {
        cout << x << '-';
    }
    else if (y == 3  || y == 4 || y == 5 || y == 6 ) {
        cout << x;
    }
    else if (y == 7 || y == 8 || y == 9) {
        cout << x << '+';

    return 0;
    }
}
