#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int m = max(max(a,b),c);
    int mi = min(min(a,b),c);
    cout << mi << " " << a + b + c - m - mi << " " << m;
    return 0;
}
