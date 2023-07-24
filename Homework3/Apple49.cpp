#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y,n,i=0;
cin >> x >> y >> n;
if (x*3>=y){
while (n>=3) {
    n=n-3;
    i++;
}
if (n==0){
    cout << i*y;
}
else if(n==1) {
    cout << i*y+1*x;
}
else if (n==2) {
    cout << i*y+2*x;
}}
else {
    cout << x*n;
}
return 0;
}
