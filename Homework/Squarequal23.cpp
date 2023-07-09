#include <bits/stdc++.h>
using namespace std;
int main() {
    double a,b,c;
    cin >> a >> b >> c;
    if ((b*b)-(4*a*c) > 0) {
        cout << -b-sqrt(b*b-4*a*c)/(2*a);
        cout << -b+sqrt(b*b-4*a*c)/(2*a);
    }
    else if ( (b*b)-4*a*c == 0) {
        cout << (-b)/(2*a);
    }
    else if ((b*b)-4*a*c < 0) {
        cout << 0;
    }
      return 0;
}
