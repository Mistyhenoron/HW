#include <bits/stdc++.h>

using namespace std;

int n, k;

int fact(int x) {
    if (x == 1) {
        return 1;
    }
    return x * fact(x-1);

}

int main() {
    cin >> n >> k;
    cout << fact(n)/(fact(n - k) * fact(k));
    return 0;
}
