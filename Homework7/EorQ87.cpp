#include <bits/stdc++.h>

using namespace std;

long long n, x = 1;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        x *= 2;
    }
    if (x > n*n) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
