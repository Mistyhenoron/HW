#include <bits/stdc++.h>
using namespace std;
 
int n, ans, cnt;
string s;
int main() {
    cin >> s;
    if (s.size() <= 1) {
        cout << s << " " << ans;
        return 0;
    }
    for (int i = 0; i < s.size(); i++) {
        cnt+= (s[i] - '0');
    }
    ans++;
        while (cnt > 9) {
            string f = to_string(cnt);
            cnt = 0;
            for (int i = 0; i < f.size(); i++) {
                cnt += f[i] - '0';
            }
            ans++;
        }
    cout << cnt << " " << ans;
    return 0;
}
