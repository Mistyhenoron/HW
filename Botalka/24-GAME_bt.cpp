#include <bits/stdc++.h>
  
using namespace std;
 
int a[1000];
bool ans = false;
void bt(int cnt, int summ) {
    if (cnt == 4) {
        if (summ == 24) {
            ans = true;
        }
        return;
    }
    bt(cnt+1, summ);
    bt(cnt+1, summ + a[cnt]);
    bt(cnt+1, summ * a[cnt]);
    bt(cnt+1, summ - a[cnt]);
    bt(cnt+1, a[cnt] - summ);
}
 
int main() {
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    bt(0,0);
    if (ans == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
