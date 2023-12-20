#include <bits/stdc++.h>
using namespace std;

long long a, b, c, p, r;
double s, R;
int main() {
    cin >> a >> b >> c;
    cin >> r;
    p = (a + b + c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    R = (s*2)/(p*2);
    if  (R >= r) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
