#include <bits/stdc++.h>

using namespace std;

const int N = 2004;
int a[N], n, minn = 2004, maxx = -1;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0 && a[i] < minn) {
            minn = a[i];
        }
        if (a[i] > 0 && a[i] > maxx) {
            maxx = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] = minn+1){
            continue;
        }
    }??????????????????

            
    cout << minn;
    return 0;
}
