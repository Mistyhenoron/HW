#include <bits/stdc++.h>
using namespace std;
int disk(double a, double b){
    if(abs(a-b)<1e-9){
        return 0;
    }
}
int main(){
double a,b,c;
cin >> a >> b >> c;
int d=b*b-4*a*c;
if (disk(d,0)==0){
        cout << -b/2*a;

}
else if(d<0){
    cout << " ";
}
else{
    cout << (-b+sqrt(d))/2*a << endl;
    cout << (-b-sqrt(d))/2*a;
}
    return 0;
}
