#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, w, x = 0, y = 0, z = 0;
    cin >> n >> w;
    int a[999];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i] <= w){
            x++;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1;j < n; j++){
            if (a[i] + a[j] <= w && a[i + 1] + a[j + 1]!=a[i] + a[j]) {
                y++;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                if (a[i] + a[j] + a[k] <= w && a[i + 1] + a[j + 1] + a[k + 1]!= a[i] + a[j] +a [k]){
                    z++;
                }
            }
        }
    }
    cout << x + y + z;
    return 0;
}

