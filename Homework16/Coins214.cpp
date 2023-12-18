#include <bits/stdc++.h>

using namespace std;

int n, w, d, p;

int main() {
    cin >> n >> w >> d >> p;
    int f = (((n*w*(n - 1))/2 - p)/d);
    if (f == 0) {
        cout << n;
    }
    else {
        cout << f;
    }
    return 0;
}
