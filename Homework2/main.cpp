#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n;
    int a[n];
    for (int i =0 ;i<n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n-1;i++) {
        for (int j=i+1;j<n;j++){
                if(a[i]-a[j]%200==0){
                   k++;
                }
        }
    }
    cout << k;
    return 0;
}




