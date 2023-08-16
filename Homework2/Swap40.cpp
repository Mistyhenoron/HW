#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    int a [999];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n ;i++){
        for (int j = 1; j<n; j++){
            if (a[j] == a[i]){
                x++;
            }
        }
    }
    cout << (n*(n - 1))/2 - (x*(x - 1))/2;
    return 0;
}
