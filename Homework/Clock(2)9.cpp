#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, h, m, s;
    cin >> x;
    h = x / 3600 % 24;
    m =  x / 60 % 60;
    s = x % 60;
    if (m < 10) {
        if (s < 10) {
            cout << h << ":" << '0' << m << ":" << '0' << s;
        }
        else {
            cout <<  h << ":" << '0' << m << ":" << s;
        }
    }
    else if (m >= 10) {
        if (s < 10) {
            cout << h << ":" << m << ":" << '0' << s;
        }
        else {
            cout << h << ":" << m << ":" << s;
        }
    }
    return 0;
}


