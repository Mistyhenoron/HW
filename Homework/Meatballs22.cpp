#include <bits/stdc++.h>
using namespace std;
int main() {
    int k,m,n;
    cin >> k >> m >> n;
    if (n<=k){
        cout << 2*m;
    }
    else if (2*n%k==0) {
        cout << m*(2*n/k);
    }
    else {
        cout << m*((2*n +k-1)/k);
    }

}
