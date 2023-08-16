#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i = 0, k, j = 0;
    cin >> n;
    while (n > j) {
        cin >> k;
        if (k > 10) {
            i = i + k - 10;
        }
        j++;}
    cout << i;
    return 0;
}
