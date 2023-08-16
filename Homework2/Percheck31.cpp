#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n; i++){
        if (a[i + 1] - a[i] == 1){
            x++;
        }
    }
    if (x == n - 1){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
