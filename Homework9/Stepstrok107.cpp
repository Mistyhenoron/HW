#include <bits/stdc++.h>

using namespace std;

string s, call;
int k;

int main() {
    cin >> s >> k;
    if (k > 0) {
        for (int i = 0; i < k; i++) {
            cout << s;
            return 0;
        }
    }
    else if (k < 0 && s.size()%abs(k) == 0 && s.size()/abs(k) != 1) {
        k = abs(k);
        for (int i = 0; i < s.size()/k; i++) {
            call += s[i];
        }
    }
       else {
        cout << "No solution";
    }
    cout << call;
  return 0;
}
