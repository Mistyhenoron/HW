#include <bits/stdc++.h>

using namespace std;

int a, b, d, al, e, ash, bsh;

int main() {
    cin >> a >> b >> d;
    al = atan2(b,a);
    e = al + (3,14*d)/180;
    ash = sin(e)*sqrt(a*a+b*b);
    bsh = cos(e)*sqrt(a*a+b*b);
    cout << ash << "\n" << bsh;
    return 0;
}
