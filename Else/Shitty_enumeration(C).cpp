#include <bits/stdc++.h>

using namespace std;

int main() {
    int ans = 0;
    string s;
    cin >> s;
    set <int> ok, notok;
    for (int i = 0; i <= 9; i++) {
        if (s[i] == 'o') {
            ok.insert(i);
        } else if (s[i] == 'x') {
            notok.insert(i);
        }
    }
    
    if (ok.size() > 4) {
        cout << 0;
        return 0;
    }
    
    for (int a = 0; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                for (int d = 0; d <= 9; d++) {
                    vector <int> temp {a, b, c, d};
                    set <int> check(temp.begin(), temp.end());
                    bool flag = 1;
                    for (auto i : ok) {
                        if (check.count(i) == 0) {
                            flag = 0;
                            break;
                        }
                    }
                    for (auto i : notok) {
                        if (check.count(i) == 1) {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag == 1) {
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}
