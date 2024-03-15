#include <bits/stdc++.h>

using namespace std;

const int N = 100;
int n, m, k, ans, colors[N], provoda[N][2];

bool check() {
    for (int i = 1; i <= m; i++) {
        if (colors[provoda[i][0]] == colors[provoda[i][1]]) {
            return false;
        }
    }
    return true;
}

void Girls(int post) {
    if (check()) {
        ans++;
        return;
    }
    for (int i = 1; i <= k; i++) {
        colors[post] = i;
        Girls(post + 1);
    }
}

int main() {
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++) {
        int fir, sec;
        cin >> fir >> sec;
        provoda[i][0] = fir;
        provoda[i][1] = sec;
    }

    Girls(0);
    cout << ans;
    return 0;
}
