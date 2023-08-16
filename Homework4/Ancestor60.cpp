#include <bits/stdc++.h>

using namespace std;

int main() {
    const int  N = 57;
    int n, a[N];
    cin >> n;

    for (int i = 2; i <= n; i++){
        cin >> a[i];
    }
    int cnt = 0, act = n;
    while (act != 1){
        cnt++;
        act = a[act];
     }
    cout << cnt;
     return 0;
}
