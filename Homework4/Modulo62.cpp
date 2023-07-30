#include <bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin >> n;
long long x = n % 998244353;
if (x<0){
    x = x + 998244353;
}
cout << x;
    return 0;
    }
