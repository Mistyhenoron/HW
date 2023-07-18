#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,k,i=0;
    cin >> n >> k;
    while (i<k){
        if (n%200 == 0) {
            n = n/200;
            i++;}
        else {
            n = n * 1000 + 200;
            i++;
    }
    }
    cout << n;
    return 0;
}
