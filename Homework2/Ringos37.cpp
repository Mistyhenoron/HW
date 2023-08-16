#include <bits/stdc++.h>

using namespace std;

int main(){
int n, x = 0;
cin >> n;
int a[999];
vector <int> cnt;
for (int i = 0; i < n; i++){
    cin >> a[i];
}
for (int i = 0; i < n; i++){
    for (int j = 1; j < n + 1; j++){
    if (a[j]-a[i]%200==0){
        cnt.push_back(a[i]);
        }
    }
}
for (int i=0;i<cnt.size(); i++) {
    x++;
}
cout << (x*(x - 1))/2;
    return 0;
}


