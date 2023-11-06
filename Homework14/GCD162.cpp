#include <bits/stdc++.h>

using namespace std;

int x, y;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    else {
        return gcd(b%a, a);
    }

}

int main() {
    cin >> x >> y;
    cout << gcd(x, y);
    return 0;
}
