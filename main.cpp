#include <bits/stdc++.h>
using namespace std;
int main() {
    int k,n,m;
    cin >> n >> m >> k;
    if (k < n*m && ((k%m == 0) || (k%n == 0))) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
// Не могу до конца понять, почему этот алгоритм с остатком работает

