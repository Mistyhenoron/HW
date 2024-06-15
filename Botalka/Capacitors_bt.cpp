#include <bits/stdc++.h>

using namespace std;

const int N = 100;
int n, capacitors[N], connections[N][N];
long double C, bigc = 99999999;
bool ans = false;

long double parallel(long double c1, long double c2) {
    return c1 + c2;
}

long double sequential(long double c1, long double c2) {
    if (c1 + c2 == 0) {
        return 0;
    }
    return ((c1*c2)/(c1+c2));
}

void bt(int cnt, long double capacity) {
    if (abs(C - capacity) < bigc) {
        bigc = abs(C - capacity);
        if (bigc <= 0.01) {
            ans = true;
        }
    }
    if (cnt == n) {
        return;
    }

    bt(cnt + 1, parallel(capacity, capacitors[cnt]));
    bt(cnt + 1, sequential(capacity, capacitors[cnt]));
    bt(cnt + 1, capacity);
}

int main() {
    cin >> n >> C;
    for (int i = 0; i < n; i++) {
        cin >> capacitors[i];
    }
    bt(0, 0);
    if (ans == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

