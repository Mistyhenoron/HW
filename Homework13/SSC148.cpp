#include <bits/stdc++.h>

using namespace std;

const int N = 104;
int n, a[N], res;

bool calc(int ax, ay, bx, by) {
    if (ax*bx == ay*by) {
        return true;
    }
    return false;
}

int main() {
    cin >> n;
    for (int i = 0; i < n*2; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n*2; i++) {
        for (int i = 0; i < n*2; i++) {
            for (int i = 0; i < n*2; i++) {
                for (int i = 0; i < n*2; i++) {
                    if (check(/*???*/)) {
                        res++;
                    }
                }
            }
        }
    }
    cout << res/8;
    return 0;
}
