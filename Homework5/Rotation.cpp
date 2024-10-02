#include <bits/stdc++.h>

using namespace std;

int n, q, shft;
string s;

int main() {
    cin >> n >> q;
    cin >> s;
    while (q--) {
        int t;
        cin >> t;
        if(t == 1) {
            int qu;
            cin >> qu;
            shft = (shft - qu + n)%n;
        } else if (t == 2) {
            int pos;
            cin >> pos;
            cout << s[(pos - 1 + shft)%n] << endl;
        }
    }
    return 0;
}
