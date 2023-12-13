#include <bits/stdc++.h>
 
using namespace std;
 
int n = 5, xin, yin, ans;
int x[6] {0, 25, 50, 75, 100};
int y[6] = {0, 0, 0, 0, 0};
bool ch[10];
 
void check(int xin, int yin) {
    for (int i = 0; i < n; i++) {
        if (((x[i] - xin)*(x[i] - xin))+((y[i] - yin)*(y[i] - yin)) <= 100) {
            ch[i] = 1;
            return;
        }
    }
}
 
int main() {
    int temp = n;
    while (temp--) {
        cin >> xin >> yin;
        check(xin, yin);
    }
    for (int i = 0; i < 5; i++) {
        if (ch[i] == 1) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
