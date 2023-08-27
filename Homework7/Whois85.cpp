#include <bits/stdc++.h>

using namespace std;

int n,x;
const int N = 1e5;
int a[N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int z = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == z) {
                x++;
            }
            if (x == 3) {
                cout << z+1;
            }
            z++;
        }
    }
    return 0;
}
