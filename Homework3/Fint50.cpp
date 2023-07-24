#include <bits/stdc++.h>
using namespace std;
int main(){
int x=0;
int a[5];
for (int i = 0;i<5;i++){
    cin >> a[i];
}
sort(a,a+5);
for (int i = 0;i<5;i++){
    if (a[i]!=a[i+1]){
        x++;
    }
}
cout << x;
return 0;
}
