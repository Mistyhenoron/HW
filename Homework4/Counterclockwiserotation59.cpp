#include <bits/stdc++.h>

using namespace std;

double a, b, d, al, e, ash, bsh, len;
const double pi = acos(-1);

int main() {
    cin >> a >> b >> d;

    al = atan2(b,a);
    e = al + pi*d/180;
    len = sqrt(a*a + b*b);
    ash = cos(e)*len;
    bsh = sin(e)*len;

    cout << setprecision(18) <<  fixed << ash << " " << bsh;
    return 0;
}
