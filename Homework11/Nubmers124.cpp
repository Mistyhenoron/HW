#include <bits/stdc++.h>

using namespace std;

string s, x, y, xy;
int maxx = -1e8;

int pmsum(string x) {
    int itog = 0;
    for (int i = 0; i < x.size(); i++) {
        if ((i - '0') % 2 == 0) {
            itog += (x[i] - '0');
        }
        else {
            itog -= (x[i] - '0');
        }
    }
    return itog;
}

int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
      x =  s.substr(i+1, s.size());
      y =  s.substr(0, i);
      xy = y + x;
      int temp = pmsum(xy);
      if (temp > maxx) {
      maxx = temp;
      }
    }
    cout << maxx;
    return 0;
}
