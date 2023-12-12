#include <bits/stdc++.h>
 
using namespace std;
 
int n, ans;
string s;
 
int main() {
    cin >> n;
    while (n > 0) {
        if (n%2 == 0) {
            n/= 2;
            s.push_back('0');
        }
        else {
            n/= 2;
            s.push_back('1');
        }
    }
    int siz = s.size() - 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            siz--;
            continue;
        }
        if (s[i] == '1') {
            ans += pow(2, siz);
            siz--;
        }
    }
    cout << ans;
    return 0;
}
