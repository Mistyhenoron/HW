#include <bits/stdc++.h>

using namespace std;

bool disk(double a, double b) {
    if(abs(a-b)<1e-9){
        return 1;
    }
    return 0;
}
int main() {
    double a,b,c;
    cin >> a >> b >> c;
    double d = b*b - 4*a*c;
    if (disk(d,0)){
            cout << setprecision(9) << fixed <<  -b/(2*a);
    }

    else if (d>0) {
        double sq = sqrt(abs(d));
        cout << setprecision(9) << fixed<<  (-b + sq)/(2*a) <<"\n" << (-b - sq)/(2*a);
    }
    return 0;
}
