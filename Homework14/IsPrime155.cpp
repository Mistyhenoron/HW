#include <bits/stdc++.h>

using namespace std;

int n;

void isPrime() {
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
    isPrime();
    return 0;
}
