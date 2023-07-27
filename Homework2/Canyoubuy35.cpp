#include <bits/stdc++.h>
using namespace std;
int x,n,s=0;
int a[444];
int main() {
    cin >> n >> x;
    for (int i=1;i<n+1;i++){
        cin >> a[i];
    }
    for (int i = 1;i<n+1;i++){
        s+=a[i];
        if (i%2==0){
            s--;
        }
    }
    if (s<=x) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
