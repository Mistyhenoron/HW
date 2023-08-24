#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 4, W = 1e6 + 4;
int n, w, x, y, z, res;
int a[N];
bool used[3*W];

int main() {
    cin >> n >>w ;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
       used[a[i]] = 1;
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1;j < n; j++){
            used[a[i] + a[j]] = 1;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                used[a[i] + a[j] + a[k]] = 1;
            }
        }
    }
    for (int i = 1; i <= w; i++) {
        if (used[i]) {
            res++;
        }
    }
    cout << res;
    return 0;
}

