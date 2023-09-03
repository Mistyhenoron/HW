#include <bits/stdc++.h>

using namespace std;

int n;

int main() {

    cin >> n;
    while (true) {
        if (n = pow(2,log2(n))) {
            cout << (int)log2(n);
            break;
        }
         n--;
        }

    return 0;
}

