#include <bits/stdc++.h>

using namespace std;

int n;

void isPrime(int n) {
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            cout << "composite";
            return;
        }
    }
    cout << "prime";
}

int main() {
    cin >> n;
    isPrime(n);
    return 0;
}
