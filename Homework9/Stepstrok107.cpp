#include <bits/stdc++.h>

using namespace std;

string s, call, t;
int k;

int main() {
    cin >> s >> k;
    if (k > 0) {
        for (int i = 0; i < k; i++) {
            t += s;
            if (t.size() > 1023) {
                t.resize(1023);
                break;
            }
        }
        cout << t;
        return 0;
    }
    if (s.size()%k != 0) {
        cout << "No solution";
    }
    else {
        for (int i = 1; i < s/k; i++) {
            for (int j = i; j < s.size(); j+= s/k) {
                ????????????
                }
            }
        }
    }
  return 0;
}
