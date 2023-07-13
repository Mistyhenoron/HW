#include <bits/stdc++.h>
using namespace std;
int main() {
   int a,b;
   cin >> a >> b;
   if (a == 0 || b%a != 0) {
    cout << "NO";
   }
   else if ( b == 0 && a == 0) {
    cout << "INF";
   }
   else {
    cout << -b/a;
   }
    return 0;
}


