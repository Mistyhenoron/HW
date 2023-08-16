#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[999];
    int cnt = 0, act = n;
    for (int i = 1; i < n; i++){
        cin >> a[i];
    }
    while (act != 1){
        n++;
        act = a[act];
        act--;
     }
    cout << n;
     return 0;
}
