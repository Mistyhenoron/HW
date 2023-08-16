#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k,f;
    cin >> n >> k;
    int s = 0;
    for (int i = 1 ;i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            f = i*100 + j;
            s = s + f;
        }
    }
    cout << s;
    return 0;
}



