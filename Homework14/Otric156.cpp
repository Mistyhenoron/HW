#include <bits/stdc++.h>

using namespace std;

int a, n;

int exponentiation(int a, int n) {
    if (n == 1) {
        return a;
    }
    return a*exponentiation(a, n-1);
}

int main() {
    cin >> a >> n;
    if (n < 0) {
        n = abs(n);
        int g = exponentiation(a, n);
        cout << fixed << setprecision(2) << 1/g;
        return 0;
    }
    else {
        int g = exponentiation(a, n);
        cout << g;
    }
    return 0;
}
