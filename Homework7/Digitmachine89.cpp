#include <bits/stdc++.h>

using namespace std;

int a[14], fist, sec, thir, four;

int main() {

    for (int i = 0; i <= 9; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= 9; i++) {
       if (a[i] == 0) {
        fist = a[i];
        sec = a[fist];
        thir = a[sec];
        four = a[thir];
        break;
       }
    }
    cout << four;
    return 0;
}
