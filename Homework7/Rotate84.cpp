#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    cout << x + (x/10%10*100 + x%10*10 + x/100) + (x%10*100 + x/100*10 + x/10%10);
    return 0;
}
