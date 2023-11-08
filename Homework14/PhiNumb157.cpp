#include <bits/stdc++.h>

using namespace std;

int n;

int phi(int n) {
    int a = 0, b = 1;
    while (true) {
        a = a + b;
        n--;
        if (n == 0) {
            return a;
        }
        b = b + a;
        n--;
        if (n == 0) {
            return b;
        }

    }

}

int main() {
    cin >> n;
    cout << phi(n);
    return 0;
}
