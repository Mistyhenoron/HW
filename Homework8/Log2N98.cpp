#include <bits/stdc++.h>

using namespace std;

long long int n, k;

int main() {

    cin >> n;
    while (true) {
        if (k + 1 > log2(n)) {
            break;
        }
        k += 1;
    }
    cout << k;
    return 0;
}
