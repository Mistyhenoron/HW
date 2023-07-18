#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,i=0,y;
    cin >> a >> b;
    while (y>0) {
        y = abs(a-b)+1 - 1;
        i++;
    }
    cout << i;
    return 0;
}
