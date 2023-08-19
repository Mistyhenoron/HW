#include <bits/stdc++.h>

using namespace std;

int n, k;
string s;

int main() {
    cin >> n >> k >> s;
    for (int i = 0; i < n; i++){
            if (k!=0 && s[i]=='o'){
                cout << 'o';
                k--;
            } else {
                cout << 'x';
            }
    }
        return 0;
}
