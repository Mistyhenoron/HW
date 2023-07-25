#include <bits/stdc++.h>
using namespace std;
int main(){
int n,x=0;
cin >> n;
string a[n];
for(int i = 0;i<n;i++){
    cin >> a[i];
    if (a[i]=="and"|| a[i]=="not" || a[i]=="that" || a[i]=="the" || a[i]=="you") {
        x++;
    }
}
if (x>=1){
    cout << "Yes";
}
else {
    cout << "No";
}
return 0;
}
