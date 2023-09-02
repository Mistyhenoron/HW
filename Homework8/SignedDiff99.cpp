#include <bits/stdc++.h>

using namespace std;

int z;
double xy, ans;
int main() {
    cin >> xy;
    while (true) {
        if (xy - z > 1) {
            z++;
        }
        else  {
            ans = xy - z;
            break;
        }
cout << ans;
    }
    if (ans == 0 || ans  == 0.1 ||  ans == 0.2) {
        cout << z << '-';
    }
    else if (ans == 0.3  || ans == 0.4 || ans == 0.5 || ans == 0.6 ) {
        cout << z;
    }
    else if (ans == 0.7 || ans == 0.8 || ans == 0.9) {
        cout << z << '+';
    }

    return 0;
}

