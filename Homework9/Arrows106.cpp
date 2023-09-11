#include <bits/stdc++.h>

using namespace std;

string s;
int cnt;

int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] == '>' && s[i + 1] == '>' && s[i + 2] == '-' && s[i + 3] == '-' && s[i + 4] == '>')|| (s[i] == '<' && s[i + 1] == '-' && s[i + 2] == '-' && s[i + 3] == '<' && s[i + 4] == '<')) {
        cnt++;
        }
    }
    cout << cnt;

  return 0;
}
//>>-->’ и ‘<--<<’.
