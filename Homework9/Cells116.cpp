#include <bits/stdc++.h>

using namespace std;
const int N = 14;
int a, c;
char b;

int main() {
    cin >> b >> a;
    if (b == 'A') {
        c =  1;
    }
    else if (b == 'B') {
        c = 2;
    }
    else if (b == 'C') {
        c = 3;
    }
    else if (b == 'D') {
        c = 4;
    }
    else if (b == 'E') {
        c = 5;
    }
    else if (b == 'F') {
        c = 6;
    }
    else if (b == 'G') {
        c = 7;
    }
    else if (b == 'H') {
        c = 8;
    }
    if (c%2 == 0 && a%2 == 0) {
        cout << "BLACK";
    }
    else if (c%2 == 0 && a%2 != 0) {
        cout << "WHITE";
    }
    else if (c%2 != 0 && a%2 == 0) {
        cout << "WHITE";
    }
    else if (c%2 != 0 && a%2 != 0) {
        cout << "BLACK";
    }
    return 0;
}
