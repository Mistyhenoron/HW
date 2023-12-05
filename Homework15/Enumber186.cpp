#include <bits/stdc++.h>

using namespace std;

int n;
string e = "2.7182818284590452353602875";
int main() {
    cin >> n;
    if (n == 0) {
        cout << 3;
        return 0;
    }
    else {
        for (int i = 0; i < n+2; i++) {
            if (i == n+1) {
                break;
            }
            cout << e[i];
        }
    }
        if (e[n+2]-'0' >= 5) {
            cout << (e[n+1] - '0') + 1;
        }
        else {
            cout << e[n+1];
        }
    return 0;
}
