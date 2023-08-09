#include <bits/stdc++.h>
using namespace std;
int main(){
int h,w,x=0;
cin >> h >> w;
string a[100][100];
for (int i = 0;i<h;i++){
    for (int j = 0;j<w;j++){
        cin >> a[i][j];
    }
}
for (int i = 0;i<h;i++){
    for (int j = 0;j<w;j++){
        if (a[i][j]=="#"){
            x++;
        }
    }
}
cout << x;
    return 0;
}
