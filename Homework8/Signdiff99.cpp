#include <bits/stdc++.h>

using namespace std;

int x,y;

int main() {
    cin >> x >> y;
    if (y <= 0 && y <= 2) {
        cout << x << '-';
    }
    else if (y <= 3 && y <=6) {
        cout << x;
    }
    else if (y <= 7 && y <= 9) {
        cout << x << '+';
    }
    return 0;
}
