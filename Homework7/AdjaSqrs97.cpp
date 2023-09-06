#include <bits/stdc++.h>

using namespace std;

const int H = 14;

int h, w, r, c;
int dr[] {-1, 0, 1, 0};
int dc[] {0, 1, 0, -1};

int main() {
    cin >> h >> w >> r >> c;
    int res = 0;
    for (int i = 0; i < 4; i++) {
        int rt = r + dr[i];
        int ct = c + dc[i];
        if (rt >= 1 && rt <= h && ct >= 1 && ct <= w) {
            res++;
        }
    }
    cout << res;
    return 0;
}

