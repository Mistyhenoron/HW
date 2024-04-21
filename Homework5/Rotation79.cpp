#include <bits/stdc++.h>

using namespace std;

int n, q, st;
string s;

int main(){
    cin >> n >> q;
    cin >> s;
    s += s;
    for (int i = 0; i < q; i++) {
        int var, x;
        cin >> var >> x;
        if (var == 1) {
            st = (st-x)%n;
        }
        else if (var == 2) {
            cout << s[x-1] << endl;
        }
    }
    return 0;
}
//не пон как реализовать этот сдвиг
