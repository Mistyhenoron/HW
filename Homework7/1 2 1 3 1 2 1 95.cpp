#include <bits/stdc++.h>

using namespace std;

int n;
string Sx;

int main() {
    cin >> n;
    Sx = "1 2 1";
    if (n == 1) {
        cout << 1;
        return 0;
    }
    else if (n == 2) {
        cout << Sx;
        return 0;
    }
    else if (n > 2) {
        for(int i = 3; i <= n; i++) {
            string x;
            x = std::to_string(i);
            Sx = Sx + " " + x +  " " + Sx;
        }
           cout << Sx;
    }
    return 0;
}
