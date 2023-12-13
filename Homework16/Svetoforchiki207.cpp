#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1e5+4;
int n, a[N], b[N], m;
 
int main() {
    cin >> n >> m;
    for (int i = 0; i < (m*2); i++) {
        cin >> a[i];
        int temp = a[i];
        b[temp]++;
    }
    for (int i = 1; i <= n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
