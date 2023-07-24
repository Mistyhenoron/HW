#include <bits/stdc++.h>
using namespace std;
int main() {
int l1,r1,l2,r2,a,b;
cin >> l1 >> r1 >> l2 >> r2;
a = max(l1,l2);
b = min(r1,r2);
if (b-a <=0){
    cout << 0;
}
else {
    cout << b-a;
}
return 0;
}
