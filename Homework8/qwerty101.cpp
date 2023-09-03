#include <bits/stdc++.h>

using namespace std;

int a[27];
char b[27];

int main() {
    for (int i = 1; i < 27; i++) {
        cin >> a[i];
        b[i] = a[i] + 96;
    }
    for (int i = 1; i < 27; i++) {
        cout << b[i];
    }
    return 0;
}


