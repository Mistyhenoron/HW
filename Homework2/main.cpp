#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,x,y,n;
    cin >> n >> a >> x >> y;
    if(a<n){
    cout << (n-(n-a))* x + (n-a)*y;}
    else {
        cout << n*x;
    }
    return 0;
}



