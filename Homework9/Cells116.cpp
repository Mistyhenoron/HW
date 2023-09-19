#include <bits/stdc++.h>

using namespace std;
const int N = 14;
int a, c;
char b;

int main() {
    cin >> b >> a;
    c = (b - 'A')%2;
    a %= 2;

    if ((a == 0 && c == 1) || (a == 1 && c == 0)) {
        cout << "BLACK";
    }

    else {
        cout << "WHITE";
    }
    return 0;
}

