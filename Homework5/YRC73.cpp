#include <bits/stdc++.h>

using namespace std;

int n, q, yellow[999], red[999];

int main() {
    cin >> n >> q;
    for (int i = 0; i < q; i++) {
        int c, x;
        cin >> c >> x;
        if (c == 1) {
            yellow[x]++;
        }
        else if (c == 2) {
            red[x]++;
        }
        else if (c == 3) {
            if (yellow[x]>1 || red[x]>0) {
                cout << "Yes" << "\n";
            }
            else {
                cout << "No" << "\n";
            }
        }
    }
    return 0;
}
